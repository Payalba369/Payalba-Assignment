package jdbcDemo;

import java.sql.*;

public class jdbcAssign4CallStoredProcedure 
{
    public static void main(String[] args) {
        // Database connection
        String url = "jdbc:mysql://localhost:3306/testdb"; 
        String user = "root";
        String password = "@Payalba030690";

        Connection conn = null;
        CallableStatement cstmt = null;

        try {
           
            Class.forName("com.mysql.cj.jdbc.Driver");

            conn = DriverManager.getConnection(url, user, password);
            System.out.println("Connected to database!");

            // Prepare CallableStatement
          
            cstmt = conn.prepareCall("{CALL GetUserFullName(?, ?)}");

            // Set input parameter
            cstmt.setInt(1, 1); // Example: userId = 1

            // Register output parameter
            cstmt.registerOutParameter(2, Types.VARCHAR);

            // Execute the stored procedure
            cstmt.execute();

            // Retrieve output parameter
            String fullName = cstmt.getString(2);
            System.out.println("Full Name: " + fullName);

        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                if (cstmt != null) cstmt.close();
                if (conn != null) conn.close();
            } catch (SQLException ex) {
                ex.printStackTrace();
            }
        }
    }
}
