/*Q17 (A) BETTER APPROACH: here we'll use hashmap and iterate through the whole array and count
element occurances in the hashmap. then we'll check the hashmap for the occurances of each element.
Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v, int n)
{
	 map<int,int> a;

  for(int i=0;i<n;i++)
  {
	  a[v[i]]++;
  }
  int p=n/2;
  for(auto it : a)
  {
	  if(it.second>p)
		  return it.first;
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
