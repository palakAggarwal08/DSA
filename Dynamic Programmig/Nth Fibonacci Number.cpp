// 23/01/22

/*Given a positive integer n, find the nth fibonacci number. 
Since the answer can be very large, return the answer modulo 1000000007. */


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        unordered_map<long long,long long>map;

        map[1]=1; // storing the value 1 in the 1st position of map.
        map[2]=1; // storing the value 2 in the 2nd position of map.
        for(int i=3;i<=n;i++) //running the loop from 3 to n and ans for i ---> //(i-1) + (i-2) and using modulus because of large nos.
        {
            map[i] = (map[i-1] + map[i-2])%1000000007;
        }
        return map[n];// return the ans.
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends