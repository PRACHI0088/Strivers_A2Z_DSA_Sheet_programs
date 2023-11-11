//to Check Sorted Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{     int n;
    cout<<"enter the no. of elements of an array: \n";
    cin>>n;
    vector<int> a(n);
    cout<<"enter tha array elements: \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
 for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            
        }
        else
        cout<<"Not Sorted \n";
    }
    cout<<"The Array is Sorted in ascending order. \n";

 return 0;
}
