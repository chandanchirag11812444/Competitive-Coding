/* Input
// The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

// Output
// Print a single integer — the minimum number of moves needed to make the matrix beautiful.
// 0 0 0 0 0
// 0 0 0 0 1
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// 3
*/

#include<iostream>
using namespace std;

int main(){
    

     int n=0;
     for(int i=1;i<=5;i++)
     {
         for(int j=1;j<=5;j++)
         {
             cin>>n;//for printing zereis
            if(n==1)
            {
                cout<<abs(i-3)+abs(j-3)<<endl;

            }


         }
     }

    return 0;
}