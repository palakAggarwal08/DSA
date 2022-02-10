//10/02/22

/* Given four different points in space. Find whether these points can form a square or not. */



 // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
        // code here
        
        if(x1==x2 && x3==x4 && y1==y2 && y3==y4)
           return "No";
        if( (abs(x1-x2) == abs(x3-x4)) && (abs(y1-y2)== abs(y3-y4)) )
           return "Yes";
        else
           return "No";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        Solution ob;
        cout << ob.isSquare(x1,y1,x2,y2,x3,y3,x4,y4) << endl;
    }
    return 0;
}  // } Driver Code Ends