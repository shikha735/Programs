// https://www.interviewbit.com/courses/programming/topics/arrays/problems/setzero/
// Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and column to 0. Do it in place.

void Solution::setZeroes(vector<vector<int> > &A) {
    int R=A.size();
    int C=A[0].size();
    bool row[R];
    bool col[C];
 
    int i, j;
    for (i = 0; i < R; i++)
    {
       row[i] = 0;
    }
    for (i = 0; i < C; i++)
    {
       col[i] = 0;
    }
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (A[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if ( row[i] == 1 || col[j] == 1 )
            {
                A[i][j] = 0;
            }
        }
    }
    /*bool firstRow=false,firstCol=false;
    for(int i=0;i<A.size();i++){
        if(A[i][0]==0){
            firstRow = true;
            break;
        }
    }
    
    for(int i=0;i<A[0].size();i++){
        if(A[0][i]==0){
            firstCol = true;
            break;
        }
    }
    
    for(int i=1;i<A.size();i++){
        for(int j=1;j<A[0].size();j++){
            if(A[i][j]==0){
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    
    for(int i=1;i<A.size();i++){
        for(int j=1;j<A[0].size();j++){
            if((A[i][0]==0)||(A[0][i]==0)){
                A[i][j]=0;
            }
        }
    }
    
    
    if(firstRow){
        for(int i=0;i<A[0].size();i++)
            A[0][i]=0;
    }
    if(firstCol){
        for(int i=0;i<A.size();i++)
            A[i][0]=0;
    }*/
}
