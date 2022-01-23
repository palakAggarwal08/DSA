// 10/01/22
/* Given a positive integer N, return the Nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row. */

#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        long long int mod = 1000000007;
        
        if(n == 1)
           return {1};
           
        vector<ll>ans;
        vector<ll>v = nthRowOfPascalTriangle(n-1);  
           
        ans.push_back(1);   
        
        for(int i=1;i<n-1;i++)
        ans.push_back((v[i-1]+v[i])%mod);
         
        ans.push_back(1);    
        
        return ans;
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends