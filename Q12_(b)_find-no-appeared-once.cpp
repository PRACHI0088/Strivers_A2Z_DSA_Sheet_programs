/*Q12 (b) Given a non-empty array of integers arr, every element appears twice except for one. Find that single one
 method-b: using map data structure.  BETTER Solution.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{		int n,flag=0;
		map<long long , int> mp;
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
			mp[a[i]]++;
		}
	

		for(int i=0;i<n;i++)
		{
			if(mp[a[i]]==1)
			{
				cout<<"the element appered only once is: ";
				flag=1;
				cout<<a[i];	
				break;
			}
		}
	
		if(flag==0)
		cout<<"no element appeared only once.";
	

	return 0;
}
