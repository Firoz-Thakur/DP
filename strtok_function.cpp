#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    char p[]="firoz bhia kardar tujhe kuch krna hn sale";
    char* q;
    q=strtok(p," ");
    while(q!=NULL)
    {   
    	cout<<q<<endl;
    	q=strtok(NULL," ");
    }
    cout<<q;
	return 0;
}
