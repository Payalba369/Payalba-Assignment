package jdbcDemo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.sql.SQLException;

public class jdbcAssign1 {
    public static void main(String[] args) {
       
        String url = "jdbc:mysql://localhost:3306/testdb"; 
        String user = "root"; 
        String password = "@Payalba030690"; 

        // SQL query
        String query = "SELECT * FROM students1"; // table = students

        try {
            // Load and register MySQL driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Establish connection
            Connection conn = DriverManager.getConnection(url, user, password);

            // 3. Create statement
            Statement stmt = conn.createStatement();

            // 4. Execute query
            ResultSet rs = stmt.executeQuery(query);

          
            System.out.println("ID\tName\t\tAge");
            System.out.println("---------------------------");
            while (rs.next()) {
                int id = rs.getInt("id");  
                String name = rs.getString("name"); 
                int age = rs.getInt("age");
                System.out.println(id + "\t" + name + "\t\t" + age);
            }

          
            rs.close();
            stmt.close();
            conn.close();

        } catch (ClassNotFoundException e) {
            System.out.println("MySQL JDBC Driver not found!");
            e.printStackTrace();
        } catch (SQLException e) {
            System.out.println("Database connection or query failed!");
            e.printStackTrace();
        }
    }
}
