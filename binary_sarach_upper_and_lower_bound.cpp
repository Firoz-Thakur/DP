#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ar[]={1,2,3,4,4,4,4,4,5,6,7};
	int n=sizeof(ar)/sizeof(int);
	int key=4;
	auto x=binary_search(ar,ar+n,key);
	if(x)
	{
	  cout<<"present"<<endl;
	  auto lower=lower_bound(ar,ar+n,key);
	  //auto y=lower_bound(ar,ar+n,key);
	  cout<<lower-ar<<endl;           //-----3
	  auto upper=upper_bound(ar,ar+n,key);
	  cout<<upper-ar<<endl;         //8 will always give the number greater than to the key element .
                               //for 5-->>8(lower bound and 9 upper bound)
	  cout<<"count the frequecy of element in the sorted array"<<endl;
	  cout<<upper-lower<<endl;
	 	
	}
	else
	 cout<<"not present"<<endl;
	return 0;
}


output:::

present
3
8
count the frequecy of element in the sorted array
5
