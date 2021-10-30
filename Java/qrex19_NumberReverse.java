//package com.nishant;

import java.util.Scanner;

public class qrex19_NumberReverse {
    public static void main(String[] args) {
        //code!

        Scanner in = new Scanner(System.in);

        System.out.print("enter a number: ");

        int num;
        num = in.nextInt();

        int revnum = 0;
        int remainum;
        while(num > 0){
            remainum = num%10;
            revnum = (revnum*10) + remainum;
            num = num/10;
        }
        System.out.println("the reverse of the input is: " + revnum);

    }
}
