//Q3. Remove Duplicates from Array and return the size of the array of unique elements.
//using 2 pointer approach.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
 {  int i=0;
	 if(n==0)
    return 0;
	else

		   for(int j=1;j<n;j++)
		   {
			   if(arr[j]!=arr[i])
			   {
				   i++;
				   arr[i]=arr[j];
			   }
		   }
		   return i+1;
 }
int main()
{		int n,p;
		cout<<"enter the size of the array: \n";
		cin>>n;
		vector<int> a(n);
		cout<<"enter the  array elements in manner:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"the length of unique element array is : ";
		p= removeDuplicates(a,n);
		cout<<p;
	return 0;
}
