//Q9 (b)method-2: Union of two given sorted arrays using 2 pointer approach.
// OPTIMAL APPROACH, 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{		int n,m;
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
		vector<int> ans;
		int i=0,j=0;
		while(i<n && j<m)
		{
			if(ans.size()==0 || ans.back()!= a[i]) /*either it's the first entry or a[i] is not present in the ans, 
													so we'll insert a[i] into vector ans.*/
			{
				ans.push_back(a[i]);
				i++;
			}
			else
			if(ans.size()==0 || ans.back()!= b[j]) /*either it's the first entry or b[j] is not present in the ans, 
													so we'll insert b[j] into vector ans.*/
			{
				ans.push_back(b[j]);
				j++;
			}			
		}

//if either of the two arrays terminates first, then the remaining elements of the other array are copied as it is in the ans.
		
		while(i<n)
		{	if(ans.size()==0 || ans.back()!= a[i]) /*either it's the first entry or a[i] is not present in the ans, 
													so we'll insert a[i] into vector ans.*/
			{
				ans.push_back(a[i]);
				i++;
			}
		}
		
		while(j<m)
		{
				if(ans.size()==0 || ans.back()!= b[j]) /*either it's the first entry or b[j] is not present in the ans, 
													so we'll insert b[j] into vector ans.*/
			{
				ans.push_back(b[j]);
				j++;
			}			
		}

	cout<<"\n the union array is:\n";
	for(int i=0;i<ans.size();i++)
{
	cout<<ans.at(i)<<endl;
}
return 0;
}


