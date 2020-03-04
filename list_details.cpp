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

}  
