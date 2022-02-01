//02/02/22

/* Given an array Arr[] of N distinct integers and a range from L to R,
 the task is to count the number of triplets having a sum in the range [L, R]. */

 // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
   int countans(int Arr[], int N, int tar)// 2 pointer algo for 3 nos.
   {
       int sum =0,count =0;
        for(int i=0;i<N;i++)
        {
            int l = i+1;
            int r = N-1;
            while(l<r)
            {
                sum = Arr[i]+Arr[l]+Arr[r];
                
                if(sum<=tar)
                 {
                     count += r-l;
                     l++;
                 }
                 else 
                   r--;
            }
        }
        return count;
   }
   
  int countTriplets(int Arr[], int N, int L, int R)
  {
        // code here
        sort(Arr, Arr+N);
        return countans(Arr,N,R) - countans(Arr,N,L-1);
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        int L, R;
        cin >> L >> R;
        Solution obj;
        cout << obj.countTriplets(Arr, N, L, R) << endl;
    }
    return 0;
}  // } Driver Code Ends