// https://www.codechef.com/problems/RIGHTTRI

#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	long long A, h;
	long double apb, amb, l,m;
	cin >> T;
	while(T--){
		cin >> h >> A;
		vector<long double> X;
		apb = sqrt((h*h) + (4*A));
		amb = sqrt((h*h) - (4*A));
		l = (apb+amb)/2;
		m = abs(apb-amb)/2;
		if(l>0 && m>0){
			X.push_back(l);
			X.push_back(m);
			X.push_back(h);
			sort(X.begin(),X.end());
			printf("%.5Lf ",X[0]);
			printf("%.5Lf ",X[1] );
			printf("%.5Lf ",X[2]);
		}
		else
			cout << -1;
		cout << endl;
	}
	return 0;
}
