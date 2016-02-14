// https://www.interviewbit.com/courses/programming/topics/math/problems/factors/

vector<int> Solution::allFactors(int A) {
	vector<int> res;
    int flag = 1;
    for(int i = 1; (i*i) <= A; i++){
        if(A%i == 0){
            res.push_back(i);
            flag++;
            if(i*i != A)
                res.push_back(A/i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}
