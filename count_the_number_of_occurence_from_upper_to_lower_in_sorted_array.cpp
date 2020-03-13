Given a sorted array A of size N and a number X, you need to find the number of occurrences of X in A.

Example:
Input:
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3
Output:
4
-1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
    {
        long int n,x;
      //  int x
        cin>>n>>x;
        int ar[n];
        for(long int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        auto it=lower_bound(ar,ar+n,x);
        auto it2=upper_bound(ar,ar+n,x);
        long int x1=it2-it;
        if(x1==0)
         cout<<"-1"<<endl;
        else
        cout<<x1<<endl;
        
    }
	return 0;
}
