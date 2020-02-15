#include <bits/stdc++.h>
#include <map>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	map <int,string> mp;
	mp[100]="firoz";
	mp[200]="bohemia";
	mp[300]="yoyo";
	mp[400]="raja";
	mp[500]="nowoman";
	mp[600]="baba";
	map <int,string>:: iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	 {
	   cout<<it->first<<endl;
	   cout<<it->second<<endl;
	 }
/* 1.size()   //use to find the size
   2.empty()   //check wheter it is empty or not
   3.mp.insert(pair<int,string>(204,"this-shit-is-so-thick");  //will insert at 34
   4.at(index); //will give value at that index
	 
	return 0;
}
