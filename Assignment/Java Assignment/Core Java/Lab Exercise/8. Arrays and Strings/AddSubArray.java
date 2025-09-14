package Assignment;
import java.util.Scanner;

public class AddSubArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input size of matrices
        System.out.print("Enter number of row: ");
        int row = sc.nextInt();
        System.out.print("Enter number of columns: ");
        int col = sc.nextInt();

        // Declare matrices
        int[][] a1 = new int[row][col];
        int[][] a2 = new int[row][col];
        int[][] sum = new int[row][col];
        int[][] diff = new int[row][col];

        // Input matrix1
        System.out.println("\nEnter elements of Matrix 1:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                a1[i][j] = sc.nextInt();
            }
        }

        // Input matrix2
        System.out.println("\nEnter elements of Matrix 2:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                a2[i][j] = sc.nextInt();
            }
        }

        // addition and subtraction
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                sum[i][j] = a1[i][j] + a2[i][j];
                diff[i][j] = a1[i][j] - a2[i][j];
            }
        }

        // Display Sum
        System.out.println("\nMatrix Addition Result:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }

        // Display Subtraction
        System.out.println("\nMatrix Subtraction Result:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(diff[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}