/*Q20: Stock Buy And Sell:You are given an array of prices where prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. 
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{	int n;
	cout<<"enter the size of the array: \n";
	cin>>n;
	vector<int> a(n);
	cout<<"enter the stock prices form day one to nth day: \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];		
	}
	cout<<"the maximum profit that can be made is \n";
	 int cost=0,p=0,mini=a[0];
    for(int i=0;i<n;i++)
    {
        cost=a[i]-mini;
        p=max(cost,p);
        mini=min(a[i],mini);
    }
    cout<< p;
    return 0;
}
