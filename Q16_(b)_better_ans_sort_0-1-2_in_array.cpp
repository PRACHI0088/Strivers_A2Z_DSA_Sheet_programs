/*Q16 (B) BETTER APPROACH: by using simple 3 variables and assigning 0,1,2 to the original array manually.
Given an array consisting of only 0s, 1s, and 2s. 
Write a program to in-place sort the array without using inbuilt sort functions.

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void sortArray(vector<int>& arr, int n)
{
	int c0,c1,c2;
	c0=0;
	c1=0;
	c2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		c0++;
		else
		if(arr[i]==1)
		c1++;
		else
		if(arr[i]==2)
		c2++;
	}
	
	for(int i=0;i<c0;i++)
	{
		arr[i]=0;
	}
		for(int i=c0;i<c0+c1;i++)
	{
		arr[i]=1;
	}
	
		for(int i=c0+c1;i<n;i++)
	{
		arr[i]=2;
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
