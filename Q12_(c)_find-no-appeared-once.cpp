/* Q12 (c): Given a non-empty array of integers arr, every element appears twice except for one. Find that single one
 OPTIMAL SOLUTION: using XOR operation here. 0^n=n and n^n=0.
 NOTE: array must have an element that appears Only Once.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{		int n,xorr=0;  //xor is a inbuilt keyword in c++. that's why I used "xorr".
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
			xorr=xorr^a[i];
		}
		
		if(xorr!=0)
		{
			cout<<"the element appeared only once is: ";
			cout<<xorr;	
		}
		else
		cout<<"no element appeared only once.";

	return 0;
}
