#include<iostream>
using namespace std;
int f(int i,string &s)
{
  if(i>=s.size()/2)
  {
      return true;
  }
  if(s[i]!=s[s.size()-i-1])
  {
      return false;
  }
  return f(i+1,s);
}
int main(){
    string p="MADMM";
    cout<<f(0,p);
    return 0;
}