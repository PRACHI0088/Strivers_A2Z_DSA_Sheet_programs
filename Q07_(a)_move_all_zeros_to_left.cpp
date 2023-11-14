//BRUTE FORCE APPOARCH
//Q7 Move Zero's to End without changing the order of non zero elements.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int n,k;
  cout<<"enter the no. of elements in the array: \n";
  cin>>n;
  vector<int> a(n);
  cout<<"enter tha array elements: \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}

// creating a vector to store all the non zero elements.
	vector<int> b;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        b.push_back(a[i]);
    }
    int p=b.size();
//putting non zero elements into main array.
    for(int i=0;i<p;i++)
    {
        a[i]=b[i];
    }
//making remaing places as zero because then wil be zero only.    
        for(int i=p;i<n;i++)
    {
        a[i]=0 ;
    }


cout<<"the left shifted zero's array is:\n " ;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}
