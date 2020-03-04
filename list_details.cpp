#include <bits/stdc++.h>
using namespace std;
int main()
{
  list <int> l{1,2,3,4,5,3};
  for(auto x:l)
    cout<<x<<"-->";
   cout<<endl;
  list <string> l2={"firoz","bhai","under","akhamumbai","nowoman","nocry"};
  l2.sort();
  for(auto x:l2)
    cout<<x<<"-->";
  cout<<endl;
  
  l2.pop_back();
  l2.push_back("chandigrah");
  l2.pop_front();
  l2.push_back("manali");
  l2.pop_back();
   for(auto x:l2)
    cout<<x<<"-->";
  
 cout<<endl;
  l2.push_back("nocry");  
   for(auto x:l2)
    cout<<x<<"-->";
  l2.remove("nocry");
  
  cout<<endl;
   for(auto x:l2)
    cout<<x<<"-->";
    
  auto it=l2.begin();
  it++;
  it++;
  l2.insert(it,"onelifetolivenofucktogive");
  cout<<endl;
  
   for(auto x:l2)
    cout<<x<<"-->";
   cout<<endl;
   auto it1=l2.begin();
   it1++;
   it1++;
   l2.erase(it1);
    for(auto x:l2)
    cout<<x<<"-->";
    
}  
