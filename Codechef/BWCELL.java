//https://www.codechef.com/LTIME30/problems/BWCELL

import java.util.*;
import java.lang.*;
import java.io.*;

class BWCELL
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int T, len = 0,n,nBL, nBR;
		String S;
		Scanner sc = new Scanner(System.in);
		T = sc.nextInt();
		while(T > 0){
			n = 0;
			nBL = 0;
			nBR = 0;
			S = sc.next();
			len = S.length();
			while((n < len) && (S.charAt(n) != 'W')){
				if(S.charAt(n) == 'B'){
					nBL++;
				}
				n++;
			}
			nBR = len - nBL - 1;
			if(nBR != nBL){
				System.out.println("Aleksa");
			}
			else System.out.println("Chef");
			T--;
		}
	}
} 