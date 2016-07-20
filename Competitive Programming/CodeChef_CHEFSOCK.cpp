// https://www.codechef.com/LTIME33/problems/CHEFSOCK

#include <iostream>
using namespace std;

int main() {
	int jacketCost,sockCost, money;
	cin >> jacketCost >> sockCost >> money;
	(((money - jacketCost)/sockCost)%2 == 1) ? cout << "Unlucky Chef" :cout << "Lucky Chef" ;
	return 0;
}