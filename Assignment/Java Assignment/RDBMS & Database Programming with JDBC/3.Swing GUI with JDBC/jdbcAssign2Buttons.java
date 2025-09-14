package jdbcDemo;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.sql.*;

public class jdbcAssign2Buttons extends JFrame {
    // DB connection settings
    private static final String DB_URL = "jdbc:mysql://localhost:3306/testdb?serverTimezone=UTC";
    private static final String DB_USER = "root";
    private static final String DB_PASS = "@Payalba030690";

   
    private JTable table;
    private DefaultTableModel tableModel;
    private JTextField tfId, tfName, tfAge;
    private JButton btnInsert, btnUpdate, btnSelect, btnDelete;

    public jdbcAssign2Buttons() {
        super("Student Manager (CRUD Demo)");

        initComponents();
        loadData();

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(700, 400);
        setLocationRelativeTo(null);
    }

    private void initComponents() {
      
        tableModel = new DefaultTableModel(new Object[]{"ID", "Name", "Age"}, 0);
        table = new JTable(tableModel);

        JScrollPane scrollPane = new JScrollPane(table);

        // Input fields
        tfId = new JTextField(5);
        tfName = new JTextField(15);
        tfAge = new JTextField(5);

        JPanel inputPanel = new JPanel();
        inputPanel.add(new JLabel("ID:"));
        inputPanel.add(tfId);
        inputPanel.add(new JLabel("Name:"));
        inputPanel.add(tfName);
        inputPanel.add(new JLabel("Age:"));
        inputPanel.add(tfAge);

        // Buttons
        btnInsert = new JButton("Insert");
        btnUpdate = new JButton("Update");
        btnSelect = new JButton("Select");
        btnDelete = new JButton("Delete");

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(btnInsert);
        buttonPanel.add(btnUpdate);
        buttonPanel.add(btnSelect);
        buttonPanel.add(btnDelete);

        // Actions
        btnInsert.addActionListener(e -> insertStudent());
        btnUpdate.addActionListener(e -> updateStudent());
        btnSelect.addActionListener(e -> loadData());
        btnDelete.addActionListener(e -> deleteStudent());

        
        Container cp = getContentPane();
        cp.setLayout(new BorderLayout());
        cp.add(scrollPane, BorderLayout.CENTER);
        cp.add(inputPanel, BorderLayout.NORTH);
        cp.add(buttonPanel, BorderLayout.SOUTH);
    }

    private void loadData() {
        tableModel.setRowCount(0);
        String sql = "SELECT id, name, age FROM students1 ORDER BY id";
        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             Statement stmt = conn.createStatement();
             ResultSet rs = stmt.executeQuery(sql)) {

            while (rs.next()) {
                tableModel.addRow(new Object[]{
                        rs.getInt("id"),
                        rs.getString("name"),
                        rs.getInt("age")
                });
            }
        } catch (SQLException ex) {
            showError(ex.getMessage());
        }
    }

    private void insertStudent() {
        String name = tfName.getText().trim();
        String ageText = tfAge.getText().trim();

        if (name.isEmpty() || ageText.isEmpty()) {
            showError("Name and Age required!");
            return;
        }

        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             PreparedStatement ps = conn.prepareStatement("INSERT INTO students1 (name, age) VALUES (?, ?)")) {

            ps.setString(1, name);
            ps.setInt(2, Integer.parseInt(ageText));
            ps.executeUpdate();

            showInfo("Student inserted!");
            loadData();

        } catch (SQLException ex) {
            showError(ex.getMessage());
        }
    }

    private void updateStudent() {
        String idText = tfId.getText().trim();
        String name = tfName.getText().trim();
        String ageText = tfAge.getText().trim();

        if (idText.isEmpty() || name.isEmpty() || ageText.isEmpty()) {
            showError("ID, Name, and Age required!");
            return;
        }

        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             PreparedStatement ps = conn.prepareStatement("UPDATE students1 SET name=?, age=? WHERE id=?")) {

            ps.setString(1, name);
            ps.setInt(2, Integer.parseInt(ageText));
            ps.setInt(3, Integer.parseInt(idText));
            ps.executeUpdate();

            showInfo("Student updated!");
            loadData();

        } catch (SQLException ex) {
            showError(ex.getMessage());
        }
    }

    private void deleteStudent() {
        String idText = tfId.getText().trim();
        if (idText.isEmpty()) {
            showError("Enter ID to delete!");
            return;
        }

        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             PreparedStatement ps = conn.prepareStatement("DELETE FROM students1 WHERE id=?")) {

            ps.setInt(1, Integer.parseInt(idText));
            ps.executeUpdate();

            showInfo("Student deleted!");
            loadData();

        } catch (SQLException ex) {
            showError(ex.getMessage());
        }
    }

    private void showError(String msg) {
        JOptionPane.showMessageDialog(this, msg, "Error", JOptionPane.ERROR_MESSAGE);
    }

    private void showInfo(String msg) {
        JOptionPane.showMessageDialog(this, msg, "Info", JOptionPane.INFORMATION_MESSAGE);
    }

    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver"); 
        } catch (ClassNotFoundException e) {
            JOptionPane.showMessageDialog(null, "Driver not found!", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        SwingUtilities.invokeLater(() -> new jdbcAssign2Buttons().setVisible(true));
    }
}
