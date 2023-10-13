/*Q13_(A)_Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
BRUTE FORCE APPORACH
here we find the sum of all the subarrays one by one and compare their sum to given "k" and then find the length.
this solution is not good coz it is using 3 for loops, which gives it a very high time complexity of O(n^3).
 */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{		int n,flag=0,k,sum=0,len=0;
		cout<<"enter the size of the array : \n";
		cin>>n;
		cout<<"enter k : \n";
		cin>>k;
		vector<int> a(n);
		cout<<"enter the  array elements :\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{   sum=0;
				for(int k=i;k<=j;k++)
				{
					sum = sum+a[k];
				}
				if(sum==k)
				{
					len=max(len,j-i+1);
				}
			}
		}
		
		cout<<"The length of the longest subarray that sums to k is :"<<endl;
		cout<<len;		
	return 0;
}
