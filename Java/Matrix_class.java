public class Matrix {
    private  int M;             // number of rows
    private  int N;             // number of columns
    private double[][] data;   // M-by-N array




    // create M-by-N matrix of 0's
    public Matrix(int M, int N) {
        this.M = M;
        this.N = N;
        data = new double[M][N];
    }
    
      // create matrix based on 2d array
    public Matrix(double[][] data) {
        M = data.length;
        N = data[0].length;
        this.data = new double[M][N];
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                    this.data[i][j] = data[i][j];
    }
     
     //return a particular row- accessor method
     public Matrix getRow(int p){
         Matrix B = new Matrix(p, N);
          Matrix A = this;
         for(int i = 0; i < N; i++)
         {
            B.data[p][i] = A.data[p][i] ;
         }
         return B;
     }
     
     //return a particular column- accessor method
      public Matrix getColumn(int q){
         Matrix B = new Matrix(M, q);
          Matrix A = this;
         for(int i = 0; i < M; i++)
         {
            B.data[i][q] = A.data[i][q] ;
         }
         return B;
     }
     
     
     //set a particular element- mutator method
     public void setElement(int p, int q , int ele)
     {
        Matrix A = this; 
         A.data[p][q] = ele;
     }
     
      // return C = A + B  method 1
      public Matrix add(Matrix B) {
        Matrix A = this;
        if (B.M != A.M || B.N != A.N) throw new RuntimeException("Illegal matrix dimensions.");
        Matrix C = new Matrix(M, N);
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                C.data[i][j] = A.data[i][j] + B.data[i][j];
        return C;
    }
    
     // return C = A + B  method 2
      public static Matrix add(Matrix A,Matrix B) {
     
        if (B.M != A.M || B.N != A.N) throw new RuntimeException("Illegal matrix dimensions.");
        Matrix C = new Matrix(A.M, B.N);
        for (int i = 0; i < A.M; i++)
            for (int j = 0; j < B.N; j++)
                C.data[i][j] = A.data[i][j] + B.data[i][j];
        return C;
    }

       // return C = A * B - method 1
    public Matrix mul(Matrix B) {
        Matrix A = this;
        if (A.N != B.M) throw new RuntimeException("Illegal matrix dimensions.");
        Matrix C = new Matrix(A.M, B.N);
        for (int i = 0; i < C.M; i++)
            for (int j = 0; j < C.N; j++)
                for (int k = 0; k < A.N; k++)
                    C.data[i][j] += (A.data[i][k] * B.data[k][j]);
        return C;
    }
    
     // return C = A * B- method 2
    public static Matrix mul(Matrix A,Matrix B) {
        
        if (A.N != B.M) throw new RuntimeException("Illegal matrix dimensions.");
        Matrix C = new Matrix(A.M, B.N);
        for (int i = 0; i < C.M; i++)
            for (int j = 0; j < C.N; j++)
                for (int k = 0; k < A.N; k++)
                    C.data[i][j] += (A.data[i][k] * B.data[k][j]);
        return C;
    }
    

    
       // does A = B exactly?
    public boolean eq(Matrix B) {
        Matrix A = this;
        if (B.M != A.M || B.N != A.N) throw new RuntimeException("Illegal matrix dimensions.");
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                if (A.data[i][j] != B.data[i][j]) return false;
        return true;
    }
    
  
    
       
      // create and return the transpose of the invoking matrix
     public Matrix transpose() {
        Matrix A = new Matrix(N, M);
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                A.data[j][i] = this.data[i][j];
        return A;
    }
    
    
// print matrix to standard output
    public void show() {
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) 
                 System.out.printf("%9.1f ", data[i][j]);
             System.out.println();
        }
    }

       public static void main(String[] args) {
        double[][] d = { { 1, 2, 3 }, { 4, 5, 6 }, { 9, 1, 3} };
         double[][] d1 = { { 1, 2, 3, 4, 5, 6 }, { 4, 5, 6, 7, 8, 9 }, { 9, 1, 3, 4, 5, 6}, { 19, 11, 13, 41, 15, 16} };
        Matrix mat1 = new Matrix(d);
        Matrix mat2 = new Matrix(d1);
        mat1.show();
        System.out.println();
        
        mat2.show();
        System.out.println();
        
        Matrix mat3 = mat2.transpose();
        mat2.show();
        System.out.println();
        
         Matrix mat4 = mat1.transpose();
        mat4.show();
        System.out.println();
        
         Matrix sum = mat1.add(mat4);
          sum.show();
         System.out.println();
         
          Matrix mul = mul(mat2,mat3);
          mul.show();
         System.out.println();
         
        
        
       }
       
}       
