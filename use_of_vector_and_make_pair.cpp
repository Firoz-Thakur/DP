given n cabs find the cabs having minimumm distance from the orgin.(sort the cab indexes according to their smallest distance

note: if the distance are same of the two cabs then sort them according to their x-cordinate.other wise sort them according to their dist
ance from the orgin.
input:
6
1 0
1 9
2 0
9 1
1 3
3 1

output:
1 0
2 0
1 3
3 1
1 9
9 1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
bool cmp(pair<int ,int> a,pair<int,int> b)
{
	int d1=a.first*a.first+a.second*a.second;
	int d2=b.first*b.first+b.second*b.second;
	if(d1==d2)
	    return a.first<b.first;
	return d1<d2;
}
 
int main() {
	// your code goes here
	vector <pair<int,int>>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	  {
	  	int a,b;
	  	cin>>a>>b;
	    v.push_back(make_pair(a,b));
	  }
     sort(v.begin(),v.end(),cmp);
	 for(auto it:v)
	  cout<<it.first<<" "<<it.second<<endl;
 
