// finding Second Largest & Second Smallest elements in an Array.
//array has all the unique and non negative elements.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//function to find second largest.
int slargest(vector<int> a, int n)
{
	int l=a[0]; //l->lrgest
	int sl=-1; //sl->second largest.
	for(int i=1;i<n;i++)
	{
		if(a[i] > l)
		{
			sl=l;
			l=a[i];
		}
		else 
		if(a[i]<l && a[i]>sl)
		{
			sl=a[i];
		}
	}
	return sl;
}
//function to find second smallest.
int ssmallest(vector<int> &a, int n)
{
    int s=a[0]; //s->smallest
    int ss=INT_MAX; //ss->second smallest
    for(int i=0;i<n;i++)
    {
        if(a[i] < s)
        {
            ss=s;
            s=a[i];
        }
        else
        if(a[i]!=s && a[i]< ss)
        {
            ss=a[i];
        }
    }
    return ss;
}

int main()
{
    int n;

    cout<<"enter the no. of elements of an array: \n";
    cin>>n;
    vector<int> a(n);
    cout<<"enter tha array elements: \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	
	int sl = slargest(a,n);
    int ss = ssmallest(a,n);
    cout<<"Second Largest Element is: "<<sl<<endl;
    cout<<"Second Smallest Element is: "<<ss;
	return 0;
} 
