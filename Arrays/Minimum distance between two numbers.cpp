// 11/01/22

/* You are given an array A, of N elements. 
Find minimum index based distance between two elements of the array, x and y. */

 //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int min_dis = INT_MAX;
        int pos_x=-1,pos_y=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==y)
              pos_y = i;
            if(a[i]==x)
              pos_x = i;
              
             if(pos_x!=-1 && pos_y!=-1) 
             {
                 min_dis= min(min_dis,abs(pos_x - pos_y));
             }
        }
             
        if(pos_x==-1||pos_y==-1)
              return -1;
        
        else
          return min_dis;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends