// CTCI 1.5
import java.util.*;

class SpaceReplace{
	public static void main(String args[]){
		//char sentence[] = {'I',' ','a','m',' ','S','h','i','k','h','a','!',' '};
		String sentence;
		String newSentence="";
		Scanner sc = new Scanner(System.in);
		sentence = sc.nextLine();
		for(int i=0;i<sentence.length();i++){
			if(sentence.charAt(i) == ' '){
				newSentence += "%20";
			}
			else{
				newSentence += sentence.charAt(i);
			}
		}
		System.out.println(newSentence);
	}
}