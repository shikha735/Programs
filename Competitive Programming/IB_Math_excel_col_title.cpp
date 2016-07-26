// https://www.interviewbit.com/problems/excel-column-title/
/*
	Given a positive integer, return its corresponding column title as appear in an Excel sheet.
	For example:
	1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
 */
 
 string Solution::convertToTitle(int A) {
    string st;
    while(A != 0){
        A--;
        st += A%26 + 65;
        A /= 26;
    }
    reverse(st.begin(), st.end());
    return st;
}

