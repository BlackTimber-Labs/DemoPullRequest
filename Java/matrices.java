import java.io.*;
import java.util.*;


public class matrices {

    public static void main(String[] args) {
        int a[][]= new int[10][10];
        int b[][]= new int[10][10];
        int c[][]= new int[10][10];
        Scanner scan = new Scanner(System.in);
          System.out.println("Enter the no of rows of square matrix");
           int n =scan.nextInt();

//Don"t hit enter after writing the elements , just give a space b/w them
            System.out.println("Enter the elements of 1st square matrix");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j] =scan.nextInt();
                System.out.printf("%d ", + a[i][j]);
            }
            System.out.printf("\n");
        }

          System.out.println("\n Enter the elements of 2nd square matrix");
           for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                b[i][j] =scan.nextInt();
                System.out.printf("%d ", + b[i][j]);
            }
            System.out.printf("\n");
        }

         System.out.println("\n After adding the elements of two square matrix");
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               System.out.printf("%d ",a[i][j]+ b[i][j]); 
            }
            System.out.printf("\n");
        }

           System.out.println("\n After multiplying the elements of two square matrix");
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
 
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
 System.out.printf("%d ",c[i][j]);
        }
  } 
    }
}
