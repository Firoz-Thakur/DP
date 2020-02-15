Given an array of n words. Some words are repeated twice, we need count such words.


input:-
2
10
hate love peace love peace hate love peace love peace
8
Tom Jerry Thomas Tom Jerry Courage Tom Courage

Output:
1
2

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

//using hashmap--->>

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	     int n;
	     map <string ,int> mp;
	     cin>>n;
	     int ans=0;
	     while(n--)
	     {   string s;
	         cin>>s;
	         mp[s]++;
	         if(mp[s]==2)
	           ans++;
	         if(mp[s]==3)
	           ans--;
	     }
	     cout<<ans<<endl;
	}
	return 0;
}
