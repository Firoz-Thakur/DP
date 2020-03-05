#include <bits/stdc++.h>
using namespace std;
/*
1. map.
2.insert.
3.find.
4.count.
5.erase
*/
int main()
{
    map<string ,int> p;
	p.insert(make_pair("firoz",1));
	p.insert(make_pair("raja",7));
    p.insert(make_pair("boemia",5));
  // for(auto x:p)
    // cout<<x.first<<" "<<x.second;
    //cout<<endl;
   pair <string ,int> pi;
   pi.first="baba";
   pi.second=99;
   p.insert(pi);
   for(auto it=p.begin();it!=p.end();it++)
       cout<<it->first<<" "<<it->second;
   cout<<endl;
   
   //find
   
   auto it=p.find("fuck");
   if(it!=p.end())
       cout<<"key present"<<p["raja"]<<endl;
   else
       cout<<"key is not present"<<endl;
     
  //count   
     
   if(p.count("raja")) // return 0 or 1
      cout<<"present"<<p["raja"]<<endl;
   else
     cout<<"not present"<<endl;
     
   //erase  
     
   p.erase("raja");
    
   for(auto it=p.begin();it!=p.end();it++)
      cout<<it->first<<" "<<it->second;
   cout<<enndl;
   p.erase("raja");
   for(auto it=p.begin();it!=p.end();it++)
      cout<<it->first<<" "<<it->second;
    
}


output:
baba 99boemia 5firoz 1raja 7
key is not present
present7
baba 99boemia 5firoz 1
baba 99boemia 5firoz 1
