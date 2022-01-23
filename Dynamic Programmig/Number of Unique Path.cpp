// 23/01/22

/*Given a A X B matrix with your initial position at the top-left cell, 
find the number of possible unique paths to reach the bottom-right cell of the matrix from the initial position.

Note: Possible moves can be either down or right at any point in time, i.e., 
we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j]. */

// { Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
     
        int ans[a][b];// creating table of a*b size
        if(a==1 && b==1)// if both a and b is 1, i.e. if both row and column is 1 that means only 1 box is there, therefore return 1, because there is only 1 way to travel.
          return 1;
        if(a==0 || b==0)// if any of a or b is 0, means end point, therefore return 0.
          return 0;
        for(int i=0;i<b;i++)// count of paths to reach any cell in first row is 1.
            ans[0][i]=1;
        for(int i=0;i<a;i++)// count of paths to reach any cell in first column is 1.
            ans[i][0]=1;
        for(int i=1;i<a;i++)//calculating count of paths for other cells in bottom-up manner.
        {
            for(int j=1;j<b;j++)
                ans[i][j]=ans[i-1][j]+ans[i][j-1]; //calculating number of path from previous column+previous row
        }
        
        
         return ans[a-1][b-1];//returning total paths.
    }
};


// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}

  // } Driver Code Ends