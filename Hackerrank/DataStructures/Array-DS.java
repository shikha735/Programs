//https://www.hackerrank.com/challenges/arrays-ds

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Array-DS {

    public static void main(String[] args) {
        int N, left, right, temp;
        Scanner s = new Scanner(System.in);
        N = s.nextInt();
        int arr[] = new int[N];
        for(int i = 0;i < N;i++)
            arr[i] = s.nextInt();
        for(left = 0,right = N-1;left <= right;left++, right--){
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
        for(int j = 0;j < N;j++)
            System.out.print(arr[j]+" ");
    }
}