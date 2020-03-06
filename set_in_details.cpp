#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int ar[73]={7,8,5,7,5,3,3,2,5,2,2,1,5,9,6,432,2};
    int n=sizeof(ar)/sizeof(int);
    set<int> s;
    for(int i=0;i<n;i++)
       s.insert(ar[i]);
    for(auto it=s.begin();it!=s.end();it++)
       cout<<*it<<" ";
     cout<<endl;
    s.erase(2);
    s.erase(432);
    auto x=s.find(1);
    s.erase(x);
     for(auto it=s.begin();it!=s.end();it++)
       cout<<*it<<" ";
    cout<<endl;
	return 0;
}
