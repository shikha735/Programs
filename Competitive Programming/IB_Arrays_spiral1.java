// https://www.interviewbit.com/courses/programming/topics/arrays/problems/array_impl1/
// Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

public class Solution {
	// DO NOT MODIFY THE LIST
	public ArrayList<Integer> spiralOrder(final List<ArrayList<Integer>> a) {
		 ArrayList<Integer> result = new ArrayList<Integer>();
		 	int T = 0, B = a.size()-1,L = 0, R = a.get(0).size()-1, dir = 0, j = 0;
	        while((T <= B) && (L <= R)){
	        if(dir == 0){
	            for(int i = L;i <= R;i++)
	                result.add(a.get(T).get(i));
	            T++;
	            dir = 1;
	        }
	    
	        else if(dir == 1){
	            for(int i = T; i <= B;i++)
	                result.add(a.get(i).get(R));
	            R--;
	            dir = 2;
	        }
	        else if(dir == 2){
	            for(int i = R; i >= L;i--)
	                result.add(a.get(B).get(i));
	            B--;
	            dir = 3;
	        }
	        else{
	            for(int i = B; i >= T ;i--)
	                result.add(a.get(i).get(L));
	            L++;
	            dir = 0;
	        }
	}
		 return result;
	}
}
