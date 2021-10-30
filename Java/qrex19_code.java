package com.nishant;
import java.util.Scanner;
public class qrex19_code {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] arr2d = new int[4][4];
        {
            /*
        [0, 0, 0, 0]
        [0, 0, 0, 0]
        [0, 0, 0, 0]
        [0, 0, 0, 0]
         */
        }
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                arr2d[i][j] = in.nextInt();
            }
        }
        System.out.println();
        System.out.println();
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                System.out.print(arr2d[i][j] + " ");
            }
            System.out.println();
        }
    }
}
