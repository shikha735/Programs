#include <iostream>
#include <cstring>
using namespace std;

void seiveOfEratosthenes(int num){
	bool arr[num];
	int j, no;
	memset(arr, true, sizeof(arr));
	for(int i = 2;i*i < num; i++){
		if(arr[i] == true){
			for(int m = i*2; m < num; m += i)
				arr[m] = false;
		}
	}
	for(int m = 2; m < num; m++)
		if(arr[m] == true)
			cout <<m << endl ;
}

int main(){
	int num;
	cout << "Enter number";
	cin >> num;
	seiveOfEratosthenes(num);
	return 0;
}