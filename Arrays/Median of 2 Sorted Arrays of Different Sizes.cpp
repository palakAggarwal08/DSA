// 01/02/22

 /* Given two sorted arrays array1 and array2 of size m and n respectively. 
 Find the median of the two sorted arrays. */

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n = array1.size();
        int m = array2.size();
        
        vector<int>v;
      
        for(int i=0;i<n;i++)
        {
            v.push_back(array1[i]);
        }
        for(int i=0;i<m;i++)
        {
            v.push_back(array2[i]);
        }
        sort(v.begin(),v.end());
        int s = v.size();
        
        
        if (s % 2 != 0)
        {return (double)v[s / 2];}
 
        return (double)(v[(s - 1) / 2] + v[s / 2]) / 2.0;
           
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}