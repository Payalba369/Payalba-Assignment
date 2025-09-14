package jdbcDemo;




import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.sql.*;

public class jdbcAssignOperation extends JFrame {
    // DB connection settings
    private static final String DB_URL = "jdbc:mysql://localhost:3306/testdb?serverTimezone=UTC";
    private static final String DB_USER = "root";
    private static final String DB_PASS = "@Payalba030690";

    // UI components
    private JTable table;
    private DefaultTableModel tableModel;
    private JTextField tfId, tfFname, tfLname, tfEmail;
    private JButton btnInsert, btnUpdate, btnSelect, btnDelete, btnClear;

    public jdbcAssignOperation() {
        super("User Manager (Swing + JDBC)");

        initComponents();
        loadData(); // initial SELECT

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(800, 450);
        setLocationRelativeTo(null);
    }

    private void initComponents() {
        // Table model
        tableModel = new DefaultTableModel(new Object[]{"ID", "First Name", "Last Name", "Email"}, 0);
        table = new JTable(tableModel);
        table.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);

     
        table.getSelectionModel().addListSelectionListener(e -> {
            if (!e.getValueIsAdjusting() && table.getSelectedRow() != -1) {
                int row = table.getSelectedRow();
                tfId.setText(tableModel.getValueAt(row, 0).toString());
                tfFname.setText(tableModel.getValueAt(row, 1).toString());
                tfLname.setText(tableModel.getValueAt(row, 2).toString());
                tfEmail.setText(tableModel.getValueAt(row, 3).toString());
            }
        });

        JScrollPane scrollPane = new JScrollPane(table);

        // Input fields
        tfId = new JTextField(5);
        tfFname = new JTextField(12);
        tfLname = new JTextField(12);
        tfEmail = new JTextField(18);

        JPanel inputPanel = new JPanel(new GridLayout(4, 2, 5, 5));
        inputPanel.add(new JLabel("ID:"));
        inputPanel.add(tfId);
        inputPanel.add(new JLabel("First Name:"));
        inputPanel.add(tfFname);
        inputPanel.add(new JLabel("Last Name:"));
        inputPanel.add(tfLname);
        inputPanel.add(new JLabel("Email:"));
        inputPanel.add(tfEmail);

        // Buttons
        btnInsert = new JButton("Insert");
        btnUpdate = new JButton("Update");
        btnSelect = new JButton("Select");
        btnDelete = new JButton("Delete");
        btnClear = new JButton("Clear Fields");

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(btnInsert);
        buttonPanel.add(btnUpdate);
        buttonPanel.add(btnSelect);
        buttonPanel.add(btnDelete);
        buttonPanel.add(btnClear);

        //  perform JDBC operations
        btnInsert.addActionListener(e -> insertUser());
        btnUpdate.addActionListener(e -> updateUser());
        btnSelect.addActionListener(e -> loadData());
        btnDelete.addActionListener(e -> deleteUser());
        btnClear.addActionListener(e -> clearFields()); // ✅ new clear action

        // Layout
        Container cp = getContentPane();
        cp.setLayout(new BorderLayout());
        cp.add(scrollPane, BorderLayout.CENTER);
        cp.add(inputPanel, BorderLayout.NORTH);
        cp.add(buttonPanel, BorderLayout.SOUTH);
    }

    /** ========== JDBC Operations ========== **/

    private void loadData() {
        tableModel.setRowCount(0);
        String sql = "SELECT id, fname, lname, email FROM users1 ORDER BY id";
        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             Statement stmt = conn.createStatement();
             ResultSet rs = stmt.executeQuery(sql)) {

            while (rs.next()) {
                tableModel.addRow(new Object[]{
                        rs.getInt("id"),
                        rs.getString("fname"),
                        rs.getString("lname"),
                        rs.getString("email")
                });
            }
        } catch (SQLException ex) {
            showError("Error selecting users1: " + ex.getMessage());
        }
    }

    private void insertUser() {
        String fname = tfFname.getText().trim();
        String lname = tfLname.getText().trim();
        String email = tfEmail.getText().trim();

        if (fname.isEmpty() || lname.isEmpty() || email.isEmpty()) {
            showError("First name, Last name, and Email are required!");
            return;
        }

        String sql = "INSERT INTO users1 (fname, lname, email) VALUES (?, ?, ?)";
        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             PreparedStatement ps = conn.prepareStatement(sql)) {

            ps.setString(1, fname);
            ps.setString(2, lname);
            ps.setString(3, email);
            ps.executeUpdate();

            showInfo("User inserted successfully.");
            loadData();
            clearFields();

        } catch (SQLException ex) {
            showError("Error inserting user: " + ex.getMessage());
        }
    }

    private void updateUser() {
        String idText = tfId.getText().trim();
        if (idText.isEmpty()) {
            showError("ID is required for update!");
            return;
        }

        String fname = tfFname.getText().trim();
        String lname = tfLname.getText().trim();
        String email = tfEmail.getText().trim();

        String sql = "UPDATE users1 SET fname=?, lname=?, email=? WHERE id=?";
        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             PreparedStatement ps = conn.prepareStatement(sql)) {

            ps.setString(1, fname);
            ps.setString(2, lname);
            ps.setString(3, email);
            ps.setInt(4, Integer.parseInt(idText));
            int rows = ps.executeUpdate();

            if (rows > 0) {
                showInfo("User updated successfully.");
                loadData();
                clearFields();
            } else {
                showError("No user found with ID " + idText);
            }

        } catch (SQLException ex) {
            showError("Error updating user: " + ex.getMessage());
        }
    }

    private void deleteUser() {
        String idText = tfId.getText().trim();
        if (idText.isEmpty()) {
            showError("Enter ID to delete!");
            return;
        }

        String sql = "DELETE FROM users1 WHERE id=?";
        try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
             PreparedStatement ps = conn.prepareStatement(sql)) {

            ps.setInt(1, Integer.parseInt(idText));
            int rows = ps.executeUpdate();

            if (rows > 0) {
                showInfo("User deleted successfully.");
                loadData();
                clearFields();
            } else {
                showError("No user found with ID " + idText);
            }

        } catch (SQLException ex) {
            showError("Error deleting user: " + ex.getMessage());
        }
    }

    /** ========== Helpers ========== **/
    private void clearFields() {
        tfId.setText("");
        tfFname.setText("");
        tfLname.setText("");
        tfEmail.setText("");
        table.clearSelection();
    }

    private void showError(String msg) {
        JOptionPane.showMessageDialog(this, msg, "Error", JOptionPane.ERROR_MESSAGE);
    }

    private void showInfo(String msg) {
        JOptionPane.showMessageDialog(this, msg, "Info", JOptionPane.INFORMATION_MESSAGE);
    }

    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver"); // ensure driver is loaded
        } catch (ClassNotFoundException e) {
            JOptionPane.showMessageDialog(null, "MySQL JDBC Driver not found!", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        SwingUtilities.invokeLater(() -> new jdbcAssignOperation().setVisible(true));
    }
}
