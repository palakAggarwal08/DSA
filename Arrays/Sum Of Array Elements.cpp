// 11/01/22
/* Given an integer array arr of size n, you need to sum the elements of arr. */

#include <bits/stdc++.h>
using namespace std;


int sumElement(int arr[],int n)
{
    //Your code here
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
    }
    return 0;
}        