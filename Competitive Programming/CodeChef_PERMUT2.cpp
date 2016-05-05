// https://www.codechef.com/problems/PERMUT2

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n!=0){
		int list[n], flag=1;
		for(int i=0;i<n;i++)
			cin >> list[i];

		for(int i=0;i<n;i++){
			if(list[list[i]-1] != i+1){
				flag = 0;
				break;
			}
		}
		
		if(flag)
			cout << "ambiguous" << endl;
		else 
			cout << "not ambiguous" << endl;
		cin >> n;
	}
	return 0;
}