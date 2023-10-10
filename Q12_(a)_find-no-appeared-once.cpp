// Q12 (a) Given a non-empty array of integers arr, every element appears twice except for one. Find that single one
// method-a: using hash array/vector.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{		int n,maxi=0,flag=0;;
		cout<<"enter the size of the array A: \n";
		cin>>n;
		vector<int> a(n);
		cout<<"enter the  array elements :\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			maxi=max(maxi,a[i]);
		}
		vector<int> v(maxi+1);	// making hash vector array of size=largest no. in the array.
		for(int i=0;i<n;i++)
		{
			v[a[i]]++;
		}



		cout<<"the element appered only once is: ";
		for(int i=0;i<n;i++)
	{
		if(v[a[i]]==1)
		{	flag=1;
			cout<<a[i];	
			break;
		}
	}

	if(flag==0)
	cout<<"no element appeared only once.";
	
	return 0;
}
