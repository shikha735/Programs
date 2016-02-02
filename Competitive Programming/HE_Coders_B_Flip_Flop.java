// https://www.hackerearth.com/problem/algorithm/flip-flop-5/

import java.util.*;
import java.io.*;
class Flip_Flop {
    public static void main(String args[] ) throws Exception {
        int N, count;
		String str;
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		while (N > 0) {
			str = sc.next();
			count = 0;
			for(int i = 1; i < str.length(); i++){
				if(str.charAt(i-1) == str.charAt(i)){
					count++;
				}
			}
			System.out.println(count);
			N--;
		}
    }
}
