// 11/01/22
/* Given an array A of positive integers. Your task is to find the leaders in the array. 
 An element of array is leader if it is greater than or equal to all the elements to its right side.
 The rightmost element is always a leader. */

 #include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector <int> s;
        int current_largest=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(current_largest<=a[i])
            {
                s.push_back(a[i]); // push element first and then assign it its value to the current_largest.
               current_largest=a[i];
               
            }
          
        }
    reverse(s.begin(),s.end());    
    return s;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends