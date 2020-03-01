//generic programming using template

#include <iostream>
using namespace std;

template<typename t>
int  search(t ar[],t k,int l)
 {
 	 for(int i=0;i<l;i++)
 	   if(ar[i]==k)
 	      return i;
     return -1;
 }

int main() {
	// your code goes here
	int ar[]={1,2,5,3,5,8};
	int k=8;
	cout<<search(ar,k,6)<<endl;
	float l=4.3;
	float ar2[]={1.4,7.5,6.5,4.3,3.6,3.5};
	cout<<search(ar2,l,6);
	
	return 0;
}
