// 01/02/22

/* Given an array arr[] of N positive integers.
 Find maximum value of |arr[i] – arr[j]| + |i – j|, (0 <= i, j <= N – 1) */


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxValue(int arr[], int N) {
        // code here
        
        int max1 =INT_MIN, max2 =INT_MIN;
        int min1 =INT_MAX, min2 =INT_MAX;
        
        for(int i=0;i<N;i++)
        {
            min1 = min(min1,i+arr[i]);
            max1 = max(max1, i+arr[i]);
            min2 = min(min2, i-arr[i]);
            max2 = max(max2, i-arr[i]);
        }
        
        return max(max1-min1 , max2-min2);
            
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxValue(arr,N) << endl;
    }
    return 0;
}  