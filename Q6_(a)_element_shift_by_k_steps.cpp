//Q6 BRUTE FORCE APPORACH
//Rotate array by k steps
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,k;
  cout<<"enter the no. of elements in the array: \n";
  cin>>n;
  cout<<"enter the no. of steps by which to rotate the array: \n";
  cin>>k;
  vector<int> a(n);
  vector<int> temp(k);
  cout<<"enter tha array elements: \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	
	//storing first k elements in temp
	for(int i=0;i<k;i++)
	{
		temp[i]=a[i];
	}
	//shifitng the array elements from kth position towards 0th position.
	for(int i=k;i<n;i++)
	{
		a[i-k]=a[i];
	}
	
	int p=0;
	//adding the elements of temp into main array;
	for(int i=n-k;i<n;i++)
	{
		a[i]= temp[p];   
		p++;	
	}
	
	cout<<"the left shifted array by "<<k<<" steps is: \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
return 0;
}
