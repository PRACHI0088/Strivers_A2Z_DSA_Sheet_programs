/*Q17 (C) OPTIMAL APPROACH: MOREE'S VOTING LAW.
Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. 
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v, int n)
{
	int ele,c=0;
	int p=n/2, ct=1;
	for(int i=0;i<n;i++)
	{
		if(c==0)
		{
			c=1;
			ele=v[i];
		}
		else
		if(v[i]==ele)
		{
			c++;
		}
		else
		{
			c--;
		}
	}
	//now iterating through the array to check if ele is the majority element or not.
	for(int i=0;i<n;i++)
	{	
		if(v[i]==ele)
		ct++;
	} 
	if(ct>p)
	{
		return ele;
	}
	
	return-1;
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
	
	cout<<"the majority element is: \n";
	cout<<majorityElement(arr,n);

	return 0;
}
