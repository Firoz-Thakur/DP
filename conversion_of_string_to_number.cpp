int convertFive(int n)
{
    string s=to_string(n);     //will convert number to string 
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
          s[i]='5';
    }
  int x=stoi(s);   //will convert string to number
  return x;
