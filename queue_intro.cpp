#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	queue <int> q;
	for(int i=0;i<5;i++)
	  q.push(i);
	while(!q.empty())
	 {
	 	cout<<q.front()<<"-<";
	 	q.pop();
	 }
	
	
	return 0;
}
