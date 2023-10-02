// Q5_Left Rotate an Array by One.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{	int n;
    cout<<"enter the no. of elements of an array: \n";
    cin>>n;
    vector<int> a(n);
    cout<<"enter tha array elements: \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int temp=a[0];
	for(int i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
    	a[n-1]=temp;
    
    
	cout<<"The left rotated array by 1 is: \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
