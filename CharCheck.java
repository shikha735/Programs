// code to check whether the given string has unique characters or not
// prints the index of duplicate characters
// Time complexity is O(n^2) and space complexity = constant

import java.util.*;

class CharCheck{
	public static void main(String[] args){
		String str;
		int k = 0;
		Scanner sc = new Scanner(System.in);
		str = sc.next();
		for (int i = 0; i < str.length(); i++) {
			for (int j = i+1; j < str.length(); j++) {
				if(str.charAt(i) == str.charAt(j)){ 
					k = j + i;
					System.out.println(str.charAt(i) + " present at " + i + " and " + k);
					return;
				}
			}
		}
		
	}
}