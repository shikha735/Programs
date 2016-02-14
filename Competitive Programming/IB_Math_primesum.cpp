// Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.
// https://www.interviewbit.com/courses/programming/topics/math/problems/primesum/

int isPrime(int N){
    if(N<2) return 0;
    for(int i=2;i*i<=N;i++){
        if(N%i == 0) return 0;
    }
    return 1;
}

vector<int> Solution::primesum(int A) {
    vector<int> res;
    int solved = 0;
    if(!solved){
        for(int j=2;j<=A/2;j++){
            if(isPrime(j)&&isPrime(A-j)){
                res.push_back(j);
                res.push_back(A-j);
                return res;
            }
        }
    }
}
