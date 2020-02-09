You are given an array A of size N. You need to enqueue the elements of the array into a queue and then print them while dequeue .

Input:
2
5
1 2 3 4 5
7
1 6 43 1 2 0 5
Output:
1 2 3 4 5
1 6 43 1 2 0 5

//main function is hidden ,you don't need to take care of that.
queue<int>_push(int ar[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int> s;
   for(int i=0;i<n;i++)
     s.push(ar[i]);
 return s;    
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
} 
