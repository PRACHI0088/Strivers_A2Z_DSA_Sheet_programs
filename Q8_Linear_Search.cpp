//Q8 Linear Search
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int n,num,flag=0;
	
  cout<<"enter the no. of elements in the array: \n";
  cin>>n;
  vector<int> a(n);
  cout<<"enter tha array elements: \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	cout<<"enter the element to search: \n";
	cin>>num;
	 for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
        	cout<<"the element is found at the position: "<<i;
        	flag=1;        
		}

    }
    	if(flag==0)
    	{
    		    cout<<"element not found !!";	
		}
	
	return 0;
}
