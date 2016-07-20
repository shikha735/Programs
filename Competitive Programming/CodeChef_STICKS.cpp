// https://www.codechef.com/COOK71/problems/STICKS/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int T, n;
	cin >> T;
	while(T--){
		cin >> n;
		vector<int> B;
		int inp,i,count=0;
		for(i=0;i<n;i++){
			cin >> inp;
			B.push_back(inp);
		}
		vector<int> res;
		sort(B.begin(),B.begin()+n);
		count=0;
		for(i=0;i<n;i++){
			if(B[i]==B[i+1]){
				count++;
				res.push_back(B[i]);
				i++;
			}
		}
		int ans;
		if(count>=2){
			ans= res[res.size()-1]*res[res.size()-2];
			cout << ans;
		}
		else
			cout << -1;
		cout << endl;
	}
	return 0;
}
