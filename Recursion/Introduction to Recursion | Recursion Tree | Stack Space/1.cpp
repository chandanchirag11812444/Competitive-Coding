#include <iostream>
using namespace std;

int fun(int i)
{  
    
    if(i<1)
    {
        return 0;
    }
    return i + fun(i-1);
        
    
}
int main()
{
    int n=4;
  int a=fun(n);
    cout<<"the sum is "<<a<<endl;
    return 0;
}