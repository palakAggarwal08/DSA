// 01/02/22

/* Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element K. 
The task is to find the index of the given element K in the array A. */


#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );


int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}

int Search(vector<int> vec, int K)
{
    int mid = 0, low = 0, high = vec.size()-1;
       
       while(low <= high)
       {
           mid = (low + high)/2;
           
           if(vec[mid] == K)
             return mid;
             
           else if(vec[mid] > vec[low])
             {
                 if(K >= vec[low] && K < vec[mid])
                     high = mid - 1;
        
                 else
                     low = mid + 1;
             }         
             
           else 
              {
                  if(K <= vec[high] && K>vec[mid])
                     low = mid + 1;
                     
                  else
                     high = mid - 1;
              }
       }
       return -1;
}
