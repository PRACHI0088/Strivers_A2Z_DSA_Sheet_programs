//Q6_OPTIMAL SOLUTION
//Left Rotate array by k steps
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int n,k;
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

	//reversing the array from 0 to kth index.
	reverse(a.begin(),a.begin()+(k));
	//reversing the array from kth to nth index.
	reverse(a.begin()+(k),a.end());
	//reversing the array from 0 to nth index.
	reverse(a.begin(),a.end());
	
	cout<<"the left shifted array by "<<k<<" steps is: \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}
