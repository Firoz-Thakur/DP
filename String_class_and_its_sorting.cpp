#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{
  return a.length()>b.length();   //will sort as per their lenght 10,9,8,7,6....0  eg: nowoma firoz kaba zabk 
}

bool cmp2(string a,string b)
 {
 	if(a.length()==b.length())
 	     return a>b;         //if lenght are equal then z will come first and then y,x.......b,a
       return a.length()>b.length();       //will compare based upon their lenght,the largest string will come first.
 }                                  //nowoma firoz zabk kaba
int main() {
	// your code goes here
	int n;
	cin>>n;
	cin.get();
	string s[100];
	for(int i=0;i<n;i++)
	  getline(cin,s[i]);
	sort(s,s+n);
	for(int i=0;i<n;i++)       
	  cout<<s[i]<<" ";    //firoz kaba nowoma zabk   by default lexilogical oder
	 
	cout<<endl; 
	sort(s,s+n,cmp);  
		for(int i=0;i<n;i++)
	  cout<<s[i]<<" ";            //   nowoma firoz kaba zabk  
	   
	  cout<<endl;
	  sort(s,s+n,cmp2);  
		for(int i=0;i<n;i++)
	      cout<<s[i]<<" ";       //nowoma firoz zabk kaba
	return 0;
}

output:
firoz kaba nowoma zabk 
nowoma firoz kaba zabk 
nowoma firoz zabk kaba
