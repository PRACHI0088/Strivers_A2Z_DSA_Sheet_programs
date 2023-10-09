//Q11 Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{		int n;
		cout<<"enter the size of the array A: \n";
		cin>>n;

		vector<int> a(n);
		cout<<"enter the  array elements(only 1 & 0) :\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		 int c=0,maxi=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c++;
            maxi=max(c,maxi);
        }
        else
        c=0;
    }
   
 cout<<"the maximum length of consecutive zeros in the given array is: "<<maxi;
	return 0;
}
