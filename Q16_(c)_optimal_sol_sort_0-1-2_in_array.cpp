/*Q16 (C) OPITMAL APPROAC: Dutch National Flag Algorithm.
here we are taking 3 pointers, low=a[0],mid=a[0],high=a[n-1].
a{0-low-1}=0, a{low-mid}=1, a{mid+1-high-1}=Need to be sorted, a{high+1-n}=2
Given an array consisting of only 0s, 1s, and 2s. 
Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void sortArray(vector<int>& arr, int n)
{
	int l,m,h;
	l=0;
	m=0;
	h=n-1;
	while(m<=h)
	{
				if(arr[m]==0)
		{
			swap(arr[m],arr[l]);
			l++;
			m++;
		}
		else
				if(arr[m]==1)
		{
			m++;
		}
		else
				if(arr[m]==2)
		{
			swap(arr[h],arr[m]);
			h--;
		}
	}
	cout<<"The sorted array is : \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
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
	
	sortArray(arr, n);



	return 0;
}
