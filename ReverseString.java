import java.util.*;

class  ReverseString{
	public static void main(String[] args){
		String str;
		Scanner sc = new Scanner(System.in);
		str = sc.nextLine();
		String revStr="";
		for(int i=str.length()-1;i>=0;i--){
			revStr += str.charAt(i);
		}
		System.out.println(revStr);
	}
}