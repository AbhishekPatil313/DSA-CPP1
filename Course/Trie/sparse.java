import java.util.Scanner;
class sparse_matrix {
    public void convert(int rows, int cols, int [][]matrix) {
        int k = 1;
        int [][]sparse = new int[10][10];
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] != 0){                     
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = matrix[i][j];
                    k++;
                }
            }
        }
        sparse[0][0] = rows;
        sparse[0][1] = cols;
        sparse[0][2] = k - 1;
        System.out.println("\nSparse Matrix: ");
        for(int i = 0; i <= sparse[0][2]; i++) {
            System.out.print("\n");
            for(int j = 0; j < 3; j++) {
                System.out.print(sparse[i][j] + " ");
            }
        }
        System.out.println("\n\nSimple transpose of the Sparse Matrix : ");
        int [][]transpose = new int[10][3];
        k = 1;
        for(int z = 0; z < sparse[0][1]; z++) {
            for(int i = 1 ; i <= sparse[0][2]; i++) {                          
                if(sparse[i][1] == z){
                    transpose[k][0] = sparse[i][1];
                    transpose[k][1] = sparse[i][0];
                    transpose[k][2] = sparse[i][2];
                    k++;
                }
            }
        }
        transpose[0][0] = sparse[0][1];
        transpose[0][1] = sparse[0][0];
        transpose[0][2] = k - 1;
        for(int i = 0; i <= sparse[0][2]; i++) {
            System.out.print("\n");
            for(int j = 0; j < 3; j++) {
                System.out.print(transpose[i][j] + " ");
            }
        }
        System.out.println("\n\nFast transpose of the matrix : ");
        int loc, i, col_no;
        int [][]final_transpose = new int[10][3];
        int []fast_transpose = new int[sparse.length];
        int []pos = new int[sparse.length+1];
        for(i = 0; i < sparse[0][1]; i++) {
            fast_transpose[i] = 0;
        }
        for(i = 1; i < sparse[0][2]; i++){
            col_no = sparse[i][1];
            fast_transpose[col_no]++;
        }
        pos[0] = 1;
        for(i = 1; i < sparse[0][1]; i++){
            pos[i] = pos[i-1] + fast_transpose[i - 1];
        }
        final_transpose[0][0] = sparse[0][1];
        final_transpose[0][1] = sparse[0][0];
        final_transpose[0][2] = sparse[0][2];
        for(i = 1; i <= sparse[0][2]; i++) {
            col_no = sparse[i][1];
            loc = pos[col_no];
            final_transpose[loc][0] = sparse[i][1];
            final_transpose[loc][1] = sparse[i][0];
            final_transpose[loc][2] = sparse[i][2];
            pos[col_no]++;
        }
        for(i = 0; i <= final_transpose[0][2]; i++){
            System.out.print("\n");
            for(int j = 0; j < 3; j++){
                System.out.print(final_transpose[i][j] + " ");
            }
        }
    }
}

public class Assignment_No_02 {    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows and columns : ");
        int rows = sc.nextInt();
        int columns = sc.nextInt();
        int [][] matrix = new int [10][10];
        System.out.println("Enter the elements of matrix : ");
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        sparse_matrix sMatrix = new sparse_matrix();
        sMatrix.convert(rows,columns,matrix);
    } 
}