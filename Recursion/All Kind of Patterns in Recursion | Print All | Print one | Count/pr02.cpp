#include<iostream>
#include<vector>
using namespace std;
int  printfun(int ind,int s,int sum,int arr[],vector<int> &ds,int n)
{
    if(s>sum) return 0;
   if(ind==n)
   {
       //condition satisfied
       if(s==sum) return 1;
       else return 0;
   }
  
   ds.push_back(arr[ind]);
   s+=arr[ind];
   int l=printfun(ind+1,s,sum,arr,ds,n);
   ds.pop_back();
   s-=arr[ind];
   int r=printfun(ind+1,s,sum,arr,ds,n);
   return l+r;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector <int> ds;
    cout<<printfun(0,0,sum,arr,ds,n);
    return 0;
}