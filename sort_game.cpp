Sanju needs your help! He gets a list of employees with their salary. The maximum salary is 100.

Sanju is supposed to arrange the list in such a manner that the list is sorted in decreasing order of salary. And if two employees
have the same salary, they should be arranged in lexicographical manner such that the list contains only names of those employees
having salary greater than or equal to a given number x.

Help Sanju prepare the same!

Input Format
On the first line of the standard input, there is an integer x. The next line contans integer N, denoting the number of employees. 
N lines follow, which contain a string and an integer, denoting the name of the employee and his salary.

Constraints
1 <= N <= 10^5 1 <= | Length of the name | <= 100 1 <= x, salary <= 100





79
4
Eve 78
Bob 99
Suzy 86
Alice 86
Sample Output
Bob 99
Alice 86
Suzy 86



#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string ,int > a,pair<string,int> b)
{
	if(a.second==b.second)
	  return a.first<b.first;
	else
	 return a.second >b.second;
}
int main() {
	int x;
	long long int n;
	cin>>x;
	cin>>n;
	vector <pair<string ,int>>v;
	while(n--)
	{
       string s;
	   int a;
	   cin>>s;
	   cin>>a;
	   v.push_back(make_pair(s,a));
	}
	sort(v.begin(),v.end(),cmp);
    for(auto it=v.begin();it!=v.end();it++)
	{
		if((it->second)>=x)
		 cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
