//Q.1 Largest Element in the Array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n)
 {
     int max;
     max=arr[0];
     for(int i=0;i<n;i++)
     {
         if(max<arr[i])
         max=arr[i];
     }
     return max;
} 

int main()
{//	vector<int> arr;
	int n,p,arr[50];
	cout<<"enter the size of the array:\n";
	cin>>n;
	cout<<"enter the array elemments: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the largest element in the array is: ";
	p =largestElement(arr,n);
	cout<<p;
	return 0;
}
