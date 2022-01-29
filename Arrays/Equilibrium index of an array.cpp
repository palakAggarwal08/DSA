// 29/01/22

/* Equilibrium index of an array is an index such that the sum of elements at lower indexes
 is equal to the sum of elements at higher indexes.

Given an array, your task is to find the index of first Equilibrium point in the array. */

// { Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
  int sum = 0, curr_sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=A[i];
  }
  
  for(int i=0;i<n;i++)
  {
      sum = sum - A[i];
      if(sum == curr_sum)
      {
          return i;
      }
      curr_sum = curr_sum + A[i];
  }
  
  return -1;
}