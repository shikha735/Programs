#include <iostream>
#define FOR() for(int i = 0; i < 26; i++)
#define FORR() for(int i = 25;i >= 0; i--)
using namespace std;

void printAlph(int num){
	char alphabets[26];
	char c;
	int i;
	for(i = 0, c = 'a'; i < 26; i++,c++){
		alphabets[i] = c ;
	}
	if(num == 0){
		FOR()
			cout << alphabets[i] << " ";
	}
	else
		FORR()
			cout << alphabets[i] << " ";
		
}

int main() {
	int N;
	cin >> N;
	if(N == 0){
		printAlph(0);
	}
	else printAlph(1);
	return 0;
}