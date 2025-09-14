package jdbcDemo;

import java.sql.*;
import java.util.Scanner;

public class jdbcAssign2CRUD {
    // Database connection 
    private static final String URL = "jdbc:mysql://localhost:3306/testdb";
    private static final String USER = "root"; // replace with your MySQL username
    private static final String PASSWORD = "@Payalba030690"; // replace with your password

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            // Load JDBC Driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Establish connection
            Connection conn = DriverManager.getConnection(URL, USER, PASSWORD);
            System.out.println("Connected to database.");

            while (true) {
                System.out.println("\n--- CRUD Operations Menu ---");
                System.out.println("1. Insert Record");
                System.out.println("2. Update Record");
                System.out.println("3. Select Records");
                System.out.println("4. Delete Record");
                System.out.println("5. Exit");
                System.out.print("Enter choice: ");
                int choice = sc.nextInt();

                switch (choice) {
                    case 1: // Insert
                        System.out.print("Enter name: ");
                        String name = sc.next();
                        System.out.print("Enter age: ");
                        int age = sc.nextInt();
                        String insertQuery = "INSERT INTO students1 (name, age) VALUES (?, ?)";
                        PreparedStatement insertStmt = conn.prepareStatement(insertQuery);
                        insertStmt.setString(1, name);
                        insertStmt.setInt(2, age);
                        insertStmt.executeUpdate();
                        System.out.println("Record inserted successfully.");
                        break;

                    case 2: // Update
                        System.out.print("Enter student ID to update: ");
                        int updateId = sc.nextInt();
                        System.out.print("Enter new name: ");
                        String newName = sc.next();
                        System.out.print("Enter new age: ");
                        int newAge = sc.nextInt();
                        String updateQuery = "UPDATE students SET name = ?, age = ? WHERE id = ?";
                        PreparedStatement updateStmt = conn.prepareStatement(updateQuery);
                        updateStmt.setString(1, newName);
                        updateStmt.setInt(2, newAge);
                        updateStmt.setInt(3, updateId);
                        int rowsUpdated = updateStmt.executeUpdate();
                        if (rowsUpdated > 0) {
                            System.out.println("Record updated successfully.");
                        } else {
                            System.out.println("No record found with ID: " + updateId);
                        }
                        break;

                    case 3: // Select
                        String selectQuery = "SELECT * FROM students1";
                        Statement selectStmt = conn.createStatement();
                        ResultSet rs = selectStmt.executeQuery(selectQuery);
                        System.out.println("\n--- Student Records ---");
                        while (rs.next()) {
                            int id = rs.getInt("id");
                            String studentName = rs.getString("name");
                            int studentAge = rs.getInt("age");
                            System.out.println("ID: " + id + ", Name: " + studentName + ", Age: " + studentAge);
                        }
                        break;

                    case 4: // Delete
                        System.out.print("Enter student ID to delete: ");
                        int deleteId = sc.nextInt();
                        String deleteQuery = "DELETE FROM students WHERE id = ?";
                        PreparedStatement deleteStmt = conn.prepareStatement(deleteQuery);
                        deleteStmt.setInt(1, deleteId);
                        int rowsDeleted = deleteStmt.executeUpdate();
                        if (rowsDeleted > 0) {
                            System.out.println("Record deleted successfully.");
                        } else {
                            System.out.println("No record found with ID: " + deleteId);
                        }
                        break;

                    case 5: // Exit
                        conn.close();
                        sc.close();
                        System.out.println("Goodbye!");
                        System.exit(0);

                    default:
                        System.out.println("Invalid choice! Try again.");
                }
            }

        } catch (ClassNotFoundException e) {
            System.out.println("MySQL JDBC Driver not found.");
            e.printStackTrace();
        } catch (SQLException e) {
            System.out.println("Database error!");
            e.printStackTrace();
        }
    }
}
