https://www.hackerrank.com/contests/hyderabads-best-coder-practice-set-1/challenges/l0ve-l3tt3r

#include <iostream>

using namespace std;


int main() {
    int N;
    cin >> N;
    char alph;
    int arr[N];
    for(int i = 0;i < N;i++)
        cin >> arr[i];
    for(int i = 0; i < N; i++){
        if((arr[i] >= 0)&&(arr[i] <= 25)){
            alph = 'a' + arr[i];
            cout << alph;
        }
        else if(arr[i] == -3)
            cout << '.';
        else if(arr[i] == -2)
            cout << ' ';
        else if(arr[i] == -1)
            cout << '\n';
    }
    return 0;
}
