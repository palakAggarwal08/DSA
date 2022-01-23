//11/01/22
/* You are given an array A of size N. 
You need to print elements of A in alternate order (starting from index 0). */

#include<bits/stdc++.h>
using namespace std;

void print(int ar[], int n)
{
    
    // code here
    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
          cout<<ar[i]<<" ";
    }
    
    
}

int main()
{
    int t,n,ar[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        print(ar,n);
        cout<<endl;
    }
}