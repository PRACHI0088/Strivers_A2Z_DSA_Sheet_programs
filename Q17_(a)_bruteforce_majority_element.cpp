/* Q17 (A) BRUTE FORCE APPROACH: here we'll simply iterate through the whole array and check for the occurances of each element.
Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v, int n)
{ int c=0;
	for(int i=0;i<n;i++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			if(v[i]==v[j])
			c++;
		}
		if(c>n/2)
		{
			return v[i];
			break;
		}
	}
	return -1;
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
