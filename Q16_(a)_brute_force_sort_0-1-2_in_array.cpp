/*Q16 (A) BRUTE FORCE APPROACH: by using simple sorting.
Given an array consisting of only 0s, 1s, and 2s. 
Write a program to in-place sort the array without using inbuilt sort functions.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int n;
	cout<<"enter the size of the array:\n";
	cin>>n;
	vector<int> arr(n);
	cout<<"enter the array elemments (ONLY 0,1,2): \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}


	for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]>arr[j])
	            {
	                swap(arr[i],arr[j]);
	            }
	        }
	    }
	cout<<"The sorted array is : \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}
