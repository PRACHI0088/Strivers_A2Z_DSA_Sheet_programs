/* Q18 (A) OPTIMAL APPROACH: KADANES ALGORITHM.
Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum=0,maxi=LONG_MIN;
    int s=0,l=0;
    for(int i=0;i<n;i++)
    {   
         sum=sum+arr[i];

         if(sum>maxi)
         {
             maxi=sum;
             l=i;
         }

        if(sum<0)
        {
            sum=0;
            s=i;
        }
    }
        if(maxi<0)
        {
            maxi=0;
        }
        
        cout<<"the subarray is: \n";
        for(int i=s;i<=l;i++)
        {
        	cout<<arr[i]<<endl;
		}
		
		cout<<"the max sum of subarray is: \n";
     cout<<maxi;
}


int main()
{	int n;
	cout<<"enter the size of the array:\n";
	cin>>n;
	vector<int> arr(n);
	cout<<"enter the array elemments: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	maxSubarraySum(arr, n);

   return 0;
}
