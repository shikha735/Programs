#include <iostream>
#define IFOR(size) for(i = 0, c = 'a'; i < size; i++, c++)
#define FORI(size) for(i = 0, c = 'z'; i < size; i++, c--)
using namespace std;

void printAlph(int size){
	char c;
	char alphabets[size];
	int i;
	if(size == 10){
		IFOR(10)
			alphabets[i] = c;
	}
	else{
		FORI(25)
			alphabets[i] = c;
	}
	for(int k = 0; k < size; k++)
		cout << alphabets[k] << " ";
}

int main() {
	int N;
	cin >> N;
	if(N == 0){
		printAlph(10);
	}
	else printAlph(25);
	return 0;
}