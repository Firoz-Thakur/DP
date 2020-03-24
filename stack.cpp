#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	stack <int> s;
	for(int i=0;i<6;i++)
	 s.push(i);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
