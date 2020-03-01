#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ar[]={1,3,5,7,9,34,65};
	int n=sizeof(ar)/sizeof(int);     //find the size of the array.
	int key=9;
	auto addres=find(ar,ar+n,key);
	int index=addres-ar;             //substraction of address from the base address.
	if(index==n)
	   cout<<key<<"no present"<<endl;
	else 
	   cout<<key<<"present at "<<index<<endl;
	return 0;
}
