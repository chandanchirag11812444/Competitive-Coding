#include<iostream>
#include<vector>
using namespace std;
void printfun(int ind,int s,int sum,int arr[],vector<int> &ds,int n)
{
   if(ind==n)
   {
       if(s==sum)
       for(auto it:ds)
       cout<<it<<"";
       cout<<endl;
       return;
   }
   ds.push_back(arr[ind]);
   s+=arr[ind];
   printfun(ind+1,s,sum,arr,ds,n);
   ds.pop_back();
   s-=arr[ind];
   printfun(ind+1,s,sum,arr,ds,n);
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector <int> ds;
    printfun(0,0,sum,arr,ds,n);
    return 0;
}