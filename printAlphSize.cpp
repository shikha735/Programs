#include <iostream>
#define IFOR(size) for(i = 0, c = 'a'; i < size; i++, c++)
#define FORI(size) for(i = 0, c = 'z'; i < size; i++, c--)
using namespace std;

int main() {
	int N;
	char c;
	int i;
	int size;
	cin >> N;
	if(N == 0){
		size = 10;
	}
	else 
		size = 25;
	char alphabets[size];
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
	return 0;
}