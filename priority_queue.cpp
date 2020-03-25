//heap is impelemented as a priority queue in stl;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	priority_queue<int> pq; // by default it will work as a max heap.For min heap priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(3);
	pq.push(1);
	pq.push(299);
	pq.push(54);
	pq.push(43);
	pq.push(24);
	while(!pq.empty())
	 {
	 	cout<<pq.top()<<",";
	 	pq.pop();
	 }
	return 0;

	
}
