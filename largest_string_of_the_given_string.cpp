#HOW TO FIND THE LARGEST STRING OF THE GIVEN N STRINGS



#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	// your code goes here
//	string s;
    int n;
    cin>>n;
    int leno=0;
    char ch[20];
    char largest[200];
    cin.get();
    while(n--)
    {
      cin.getline(ch,100);
      int len=strlen(ch);
      if(len>leno)
        {
        	strcpy(largest,ch);
        	leno=len;
        }
    }
    cout<<largest;
	return 0;
}
