class Solution {
    public boolean searchMatrix(int[][] m, int target) {
        int d=0,e=0;
        int i,j,flag =0;
        d=m.length;
        e=m[0].length;
        for(i=0;i<d;i++)
        {
            for(j=0;j<e;j++)
            {
                if(m[i][j]==target)
                {
                    flag=1;
                   
                }
            }
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
   
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input rows and columns
        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter number of columns: ");
        int cols = sc.nextInt();

        int[][] matrix = new int[rows][cols];

        // Input matrix elements
        System.out.println("Enter the matrix elements:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        System.out.print("Enter the target element: ");
        int target = sc.nextInt();
        Solution solution = new Solution();
        boolean result = solution.searchMatrix(matrix, target);
        if (result) {
            System.out.println("Target found in the matrix.");
        } else {
            System.out.println("Target not found in the matrix.");
        }

        sc.close();
    }
}
