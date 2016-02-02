//https://www.hackerrank.com/challenges/angry-professor

#include <iostream>

using namespace std;

void solve(){
    int N;
    int k;
    int x;
    int sum;
    cin >> N >> k;
    for(int j = 0;j < N;j++){
        cin >>x;
        if(x <= 0) sum++;
    }
    if(sum < k)
        cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int T;
    cin >> T;
    for(int i = 0;i < T;i++)
        solve();
	return 0;
}
