/*Q 15 (A) BRUTE FORCE METHOD: Check if a pair with given sum exists in Array
Problem Statement: Given an array of integers arr[] and an integer target.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target)
{
    int s;
    s=book.size();
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if((book[i]+book[j])==target)
            {
                return "YES";
                break;
            }
        }
    }
    return "NO";

}


int main()
{	int n,k;
	cout<<"enter the size of the array:\n";
	cin>>n;
	cout<<"enter the target sum:";
	cin>>k;
	vector<int> arr(n);
	cout<<"enter the array elemments: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the target is present ? : ";
	cout<<read(n,arr,k);

	return 0;
}
