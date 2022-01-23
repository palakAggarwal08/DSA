// 10/01/22
/* The problem is to count all the possible paths from top left to bottom right of a MxN matrix
 with the constraints that from each cell you can either move to right or down. */


#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
    // Code Here
    if(m == 1 || n == 1) // base case when either row or column is 1.
     return 1;
     
    return  numberOfPaths(m-1, n) + numberOfPaths(m, n-1); // subproblem is broken into two parts, when either rows are row-1 or columns are column -1.
}

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends