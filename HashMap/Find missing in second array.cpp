// 09/01/22
/*Given two arrays A and B contains integers of size N and M,
 the task is to find numbers which are present in the first array, but not present in the second array.*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    unordered_map<int,int>map;
	    
	    vector<long long>v;
	    // we will be storing the second array in a hash map
	  
	    for(int i=0;i<M;i++)
	    {
	        map[B[i]]++;
	    }
	    // then we will check if the element of array 1 is present in the map or not.
	    for(int i=0;i<N;i++)
	    {
	        if(map.find(A[i])==map.end())
	          v.push_back(A[i]);// if not present , push it into a new array and print it.
	    }
	    return v;
	} 
};
	

// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends