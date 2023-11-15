//OPTIMAL FORCE APPOARCH
//Q7 Move Zero's to End without changing the order of non zero elements.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int n,j;
	j=-1;
  cout<<"enter the no. of elements in the array: \n";
  cin>>n;
  vector<int> a(n);
  cout<<"enter tha array elements: \n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
//using 2 ptr approach. j points to 0 value and i pints to non zero value and then both are swapped and j is incremented.	
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			j=i;
			break;			
		}
	}
	
	for(int i=j+1;i<n;i++)
	{	if(j==-1)
		break;
		
		else
		
		if(a[i]!=0)
		{
				swap(a[i],a[j]);
				j++;
		}
	
	}
 
 cout<<"the left shifted zero's array is:\n" ;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}
