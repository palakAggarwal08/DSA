// 30/01/22

/* GIven two positive integers N and K. You have to find the Kth smallest factor of N. 
A factor of N is a positive integer which divides N.
 Output the Kth smallest factor of N if it exists otherwise print -1. */

 // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int kThSmallestFactor(int N , int K) {
        // code here
        int count = 1;
        
        if(K==1)
           return 1;
        for(int i=2;i<=N;i++)
         {
             if(N%i == 0)
               { count++;}
             if(count==K)
              { return i;}
         }
         return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;

        Solution ob;
        cout << ob.kThSmallestFactor(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends