// 30/01/22

/* Given an array Arr (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion.
 The converted array should be in form a < b > c < d > e < f. 
The relative order of elements is same in the output i.e you have to iterate on the original array only. */

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    // code here
	    for(int i=1;i<n;i++)
	    {
	        if(i%2 == 0)
	        {
	            if(arr[i]>arr[i-1])
	               swap(arr[i],arr[i-1]);
	        }
	        else
	         {
	           if(arr[i]<arr[i-1])
	               swap(arr[i],arr[i-1]);   
	         }
	            
	           
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
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends

// or can be solved using below function also.

  void zigZag(int arr[], int n) {
	    // Flag true indicates relation "<" is expected,
	    // else ">" is expected. The first expected relation
	    // is "<"
	    bool flag = true;

	    for (int i = 0; i <= n - 2; i++) {
	        if (flag) /* "<" relation expected */
	        {
	            /* If we have a situation like A > B > C,
	            we get A > B < C by swapping B and C */
	            if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
	        } else /* ">" relation expected */
	        {
	            /* If we have a situation like A < B < C,
	            we get A < C > B by swapping B and C */
	            if (arr[i] < arr[i + 1]) swap(arr[i], arr[i + 1]);
	        }
	        flag = !flag; /* flip flag */
	    }
	}