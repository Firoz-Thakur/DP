#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char ar[100][100];
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	 cin.getline(ar[i],50);
	for(int i=0;i<n;i++)
	 cout<<ar[i]<<endl;
	return 0;
}
