Given a vector of N positive integers and an integer X. The task is to find the frequency of X in vector.

ALGO 1----> linear search o(n) time

ALGO 2 ----> BINARY SEARCH O(logn) time

ALGO 3 -----> STL

Input:
1
5
1 1 1 1 1
1
Output:
5

Explanation:
Testcase 1: Frequency of 1 is 5.

int findFrequency(vector<int> v, int x){

    return count(v.begin(),v.end(),x);
            //sort(v.begin(),v.end());
            //auto low=lower_bound(v.begin(),v.end(),x)-v.begin();
            //auto high=upper_bound(v.begin(),v.end(),x)-v.begin();
           //return high-low;
    }
