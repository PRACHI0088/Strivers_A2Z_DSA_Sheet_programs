//Q9 (a)method-1: Union of two given sorted arrays using set.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{		int n,m;
		set<int> ans;  //used set because it stored sorted and unique elements.
		cout<<"enter the size of the array A: \n";
		cin>>n;
		cout<<"enter the size of the array B: \n";
		cin>>m;
		vector<int> a(n), b(m);
		cout<<"enter the  array elements :\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"enter the  array elements :\n";
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		
		//inserting unique elements in the set "ans".
		for(int i=0;i<n;i++)
		{
			ans.insert(a[i]);
		}
			for(int i=0;i<m;i++)
		{
			ans.insert(b[i]);
		}
	int p=ans.size(),i=0;
	vector<int> v(p);
	  for(auto & it: ans)
    {
        v[i]=it;
        i++;
    }

	cout<<"\n the union array is:\n";
	for(int i=0;i<p;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
