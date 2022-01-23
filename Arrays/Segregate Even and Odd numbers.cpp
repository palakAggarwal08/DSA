// 15/01/22
/* Given an array Arr[], write a program that segregates even and odd numbers.
 The program should put all even numbers first in sorted order, and then odd numbers in sorted order. */

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int>o;
	    vector<int>e;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2 == 0)
	          e.push_back(arr[i]);
	        else  
	          o.push_back(arr[i]);
	    }       
	   
	     sort(e.begin(),e.end());
	     sort(o.begin(),o.end());
	    
	    int i=0;
	    for(auto x:e)
	    {
	        arr[i++]=x;
	    }
	     for(auto x:o)
	    {
	        arr[i++]=x;
	    }
	   
	
	}
};
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends