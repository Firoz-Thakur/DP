#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class person{
	public:
	string name;
	int age;
	person(string a,int b)
	{
		name=a;
		age=b;
	}
};
class personcmp{
	public:
	bool operator()(person a,person b)    //overloaded ,object of personcmp will made by priority_queue class ,which itself will call to this.
	{
		return a.name<b.name;
	}
};
int main() {
	// your code goes here
 priority_queue <person,vector <person> ,personcmp>pq;  //in sort we pass function,but in priority queue we pass class
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
 	string name;
 	int age;
 	cin>>name>>age;
 	person p(name,age);
 	pq.push(p);
 }
 int k;
 cin>>k;
 for(int i=0;i<k;i++)
 {
 	person p=pq.top();
 	cout<<p.name<<" "<<p.age<<endl;
 	pq.pop();
 }
 return 0;
}
