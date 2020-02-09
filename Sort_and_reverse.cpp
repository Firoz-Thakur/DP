You are given a vector V of size n. You need to sort it and reverse it.

Input:
1
5
1 2 3 4 5
Output:
1 2 3 4 5
5 4 3 2 1
 
//code verse

vector<int> sortVector(vector<int>v)
{
   //Your code here. Use library function
   sort(v.begin(),v.end());
    return v;
}
vector<int> reverseVector(vector<int>v)
{
     //Your code here. Use library function
     reverse(v.begin(),v.end());
    return v;
}
