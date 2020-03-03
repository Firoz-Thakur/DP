//sort the number with ther set bits
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool comp(int  a,int  b)
{
	int ca=0,cb=0;
	while(a)
	{
		a=a&(a-1);
	    ca++;
	}
   while(b)
	{
		b=b&(b-1);
	    cb++;
	}
 return ca<cb;	
}
int main() {
	// your code goes here
	int ar[]={31,17,15,31,64,63,127,128};
	int n=sizeof(ar)/sizeof(int);
    sort(ar,ar+n,comp);
    for(int i=0;i<n;i++)
      cout<<ar[i]<<" ";
}
