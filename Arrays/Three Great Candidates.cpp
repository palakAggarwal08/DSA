// 10/02/22

/* The hiring team aims to find 3 candidates who are great collectively.
 Each candidate has his or her ability expressed as an integer. 
 3 candidates are great collectively if product of their abilities is maximum.
 Given abilities of N candidates in an array arr[], find the maximum collective ability from the given pool of candidates. */

// { Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long maxProduct(int arr[], int n) {
        // code here
       sort(arr,arr+n);
       long long  ans = 0;
       long long  ANS=0;
       
        ans = (long)arr[n-3]*arr[n-2]*arr[n-1];
        ANS = (long)arr[0]*arr[1]*arr[n-1];
    
        return (long)max(ans,ANS);
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends

