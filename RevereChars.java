// CTCI 1.2
import java.util.*;

class ReverseChars{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		char str[] = new char[N];
		char revStr[] = new char[N];
		for(int i=0;i<N;i++){
			str[i] = sc.nextChar();
		}
		for(int i=N-1;i>=0;i--){
			revStr[N-i-1]=str[i];
		}
		System.out.println(revStr);
	}
}