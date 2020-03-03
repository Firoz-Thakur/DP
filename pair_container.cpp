#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
  pair <int ,char> p;
  p.first=3;
  p.second='v';
  cout<<p.first<<":";
  cout<<p.second<<endl;   // 3:v
  pair <int,char>p2(p);
  cout<<p2.first<<":";     //3:v
  cout<<p2.second<<endl;
  
  
  //use of make_pair function.
  pair <int,string> p3=make_pair(2,"baba");
   cout<<p3.first<<":";    
  cout<<p3.second<<endl;         //2:baba
  
  //other way
  int a,b;
  cin>>a>>b;           //2,3
  pair<int,int> p4=make_pair(a,b);
  cout<<p4.first<<":";    
  cout<<p4.second<<endl;    //2:3
 
//if you have multiple data or we can say 2d data

pair<pair<int,int>,string> p5=make_pair(make_pair(2,3),"nowoman");
 cout<<p5.first.first<<":";    
 cout<<p5.first.second<<":";
 cout<<p5.second<<endl;      //2:3:nowoman
  
}

output::
3:v
3:v
2:baba
2:3
2:3:nowoman
