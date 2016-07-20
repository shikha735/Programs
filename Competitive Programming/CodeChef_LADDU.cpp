//https://www.codechef.com/MAY16/problems/LADDU
#include <iostream>
using namespace std;

int main() {
	int T, activities, rank, severity;
	string act[4] = {"CONTEST_WON", "TOP_CONTRIBUTOR", "BUG_FOUND", "CONTEST_HOSTED"};

	cin >> T;
	while(T--){
		string origin;
		int total = 0, points = 200;
		cin >> activities;
		cin >> origin;
		if(origin.compare("INDIAN") == 0)
			points = 200;
		else if(origin.compare("NON_INDIAN") == 0)
			points = 400;

		for(int i=0;i<activities;i++){
			string newAct;
			cin >> newAct;
			if(newAct.compare(act[0]) == 0){
				cin >> rank;
				total += 300;
				if(rank < 20)
					total += (20 - rank);
			}
			else if(newAct.compare(act[1]) == 0){
				total += 300;
			}
			else if(newAct.compare(act[2]) == 0){
				cin >> severity;
				total += severity;
			}
			else if(newAct.compare(act[3]) == 0){
				total += 50;
			}
		}

		cout << total/points << endl;
	}
	return 0;
}
