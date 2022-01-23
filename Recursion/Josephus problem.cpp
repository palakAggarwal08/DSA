// 10/01/22
/* Given the total number of persons n and a number k which indicates that k-1 
persons are skipped and kth person is killed in circle in a fixed direction.

The task is to choose the safe place in the circle so that when you perform these
 operations starting from 1st place in the circle, you are the last one remaining and survive. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       return jos(n,k)+1; // calling helper function jos and adding 1 because here index starts from 1.
    }
    
    int jos(int n, int k) // helper function jos. when n is 1, it will return 0 and otherwise we'll apply recursion; '%n' is used because of circle. 
     {
       if(n==1)
         return 0;
       return (jos(n-1,k)+k)%n;   
     }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends