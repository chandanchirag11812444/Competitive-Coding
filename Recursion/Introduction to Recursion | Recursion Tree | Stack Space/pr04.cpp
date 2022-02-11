#include<iostream>
using namespace std;
void fun(int i,int n)
{
    if(i<1)
    return;
    fun(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    
    cin>>n;
    cout<<endl;
    fun(n,n);
    return 0;
}