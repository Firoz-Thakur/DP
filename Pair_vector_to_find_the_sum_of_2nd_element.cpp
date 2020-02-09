# STL
Pairs and vectors can be used together to achieve some amazing results. Here we will learn to use a vector that holds pairs.
You are given a vector V of size n. The vector hold pair of integers. Example V={(1,2),(3,4)...}. Now, you need to sum the second elements.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input.
The first line contains n denoting the size of the array. The second line contains 2*n elements.

Output Format:
For each testcase, in a new line, print the required output.

1
5
1 2 3 4 5 6 7 8 9 10
Output:
30

Explanation:
Testcase1:
v[0]= 1,2
v[1]= 3,4
v[2]= 5,6
v[3]= 7,8
v[4]= 9,10
Now we sum all the second elements of a pair. So 2+4+6+8+10=30

  void sum(vector<pair<int,int>>v)
  {
    long long sum=0;
    //Your code here
    for(int i=0;i<v.size();i++)
      sum=sum+v[i].second;
    cout<<sum;
    cout<<endl;
   }
