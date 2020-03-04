#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//vector class
/*
vector always double its size if the size if required
1,2,4,8,16.32.......
if 7 values are there size will be 8
if 5 values are there also there will be 8  size.
works on dynamic array.
*/
int main() {
   // vector <int> v; //size not requied ,we can also intialized.
   //  vecotr <int> v(4);
   //vector <string> v(5,"heleo baba");  //intialized to zero
   //  cout<<v.size()<<endl;
   //for(int i=0;i<v.size();i++)
   //{
   //      cout<<v[i]<<endl;  	
   //}
   
   
   // size tells the no of element currently in the vector 
   //capacity tells the total capacity of the vector
  vector <int> v;
  cout<<v.capacity();
  for(int i=0;i<9;i++)
  {
  	 v.push_back(i);
  	 cout<<v.capacity();  //0 1 2 4 4 8 8 8 8 
  }
  cout<<endl<<"final capcity="<<v.capacity()<<endl;  //16
  cout<<"size="<<v.size();       //9
  cout<<endl;
  for(int i=0;i<9;i++)
  {
  	 cout<<v[i]<<" ";   //0 1 2 3 4 5 6 7 
  }
  
  v.pop_back();   //will remove the element from the last
  
  for(int i=0;i<v.size();i++)
  	 cout<<v[i]<<" "; 
  cout<<"size="<<v.size()<<endl;    //8  size have been decrease but not the capacity
  cout<<v.capacity();   //16
  
  v.pop_back(); 
  cout<<"size="<<v.size()<<endl;    //7  size have been decrease but not the capacity
  cout<<v.capacity();        //capcity is not reducing

  //v.clear();                //will clear all the element of the vector to zero and size will also become zero but capacity remains the same
  cout<<"size="<<v.size()<<endl;    //0  size have been decrease but not the capacity
  cout<<v.capacity();               //16
  cout<<v.at(6);      // 6     tells value at given index;
  cout<<v.front()<<v.back();  //0 6
  cout<<endl;	
  vector <int> :: iterator it=v.begin();  //it is pointing to starting element.
  v.insert(it+2,24);
   for(int i=0;i<v.size();i++)
  	 cout<<v[i]<<" "; 	
	return 0;
}

//we can also insert the value inside the vector using iterator.



#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	vector <int> v(4,5);
	for(auto x:v)
	 cout<<x<<" ";
	 cout<<endl;
    vector <int> v1(v.begin(),v.end());
    for(auto x:v1)
	 cout<<x<<" ";
	cout<<endl;
	vector <int> v4;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v4.push_back(a);
	}
	for(auto x: v4)
	 cout<<x<<" ";
cout<<endl;
cout<<v.size()<<endl;    //the memory firstly intailzed is allocated.
cout<<v4.size()<<endl;    
cout<<v.capacity()<<endl;
cout<<v4.capacity()<<endl;   //memory increases dynamically 2,4,8,16....
}
