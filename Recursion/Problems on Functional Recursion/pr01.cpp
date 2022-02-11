#include<iostream>
#include<algorithm>
using namespace std;
void  ReverseA(int i,int *A,int n)
{
   if(i>=n/2)
   {
       return;

   }
   swap(A[i],A[n-i-1]);
   ReverseA(i+1,A,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    ReverseA(0,arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}