https://www.hackerrank.com/contests/kodecrypt-round-2-slot-4/challenges/kodecrypt-round-2-slot-3-q1

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


public class Solution {

    public static void main(String[] args) {
       int N;
        String str="123";
        Scanner s=new Scanner(System.in);
        N=s.nextInt();
        String ar[]=new String[N];
        for(int i=0;i<N;i++)
            ar[i]=s.next();
        for(int i=0;i<N;i++){
            if(ar[i].contains(str)) 
            System.out.println("yes");
            else
           System.out.println("no");
    	}
    }
}