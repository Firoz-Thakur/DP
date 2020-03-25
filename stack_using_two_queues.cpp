#include <iostream>
#include <queue>
using namespace std;

template<typename t>
class stack{
    queue <t> q1,q2;
	
 public:
   void push(t element)
   {
   
   	 q1.push(element);
  
   }
   void pop()
   {
   	 if(q1.empty())
   	  return;
   	 while(q1.size()>1)
   	  {
   	  	t x =q1.front();
   	  	q2.push(x);
   	  	q1.pop();
   	  }
   	  q1.pop();
   	  swap(q1,q2);
    }
   
   t top()
   {
   	  
   	 while(q1.size()>1)
   	  {
   	  	t x =q1.front();
   	  	q2.push(x);
   	  	q1.pop();
   	  }
   	  t y = q1.front();
   	  q1.pop();
   	  q2.push(y);
   	  swap(q1,q2);
   	  return y; 
   }
  t size()
  {
  	return q1.size()+q2.size();
  }
  bool empty()
  {
  	return q1.size()==0;
  }
};
int main() {
	// your code goes her
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
while(!s.empty())
 {
 	cout<<s.top()<<" ";
 	s.pop();
 }
	return 0;
}
