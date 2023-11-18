/*Q21 : Rearrange Array Elements by Sign
There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ 	int n;
	cout<<"enter the size of the array: \n";
	cin>>n;
	vector<int> a(n);
	cout<<"enter the array elements: \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];		
	}
	
	vector<int> pos(n/2),neg(n/2);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<0) // -ve no. 
        neg.push_back(a[i]); //enter it in neg vector
        else        
        if(a[i]>=0) // +ve no. 
        pos.push_back(a[i]); //enter it in pos vector
    }

    for(int i=0;i<n/2;i++)
    {
        a[2*i]=pos[i];
        a[2*i + 1]=neg[i];
    }

    cout<<"the array after rearranging is: \n";
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<endl;
	}

return 0;
}
