#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define vi  vector<int>
#define vll vector<long long int>

int main()
{
    int T;
    cin >> T;
   for(int t=1;t<T+1;t++)
    {
        int N;
        cin >> N;
        int num = 0;
        vi v; // This stores the input Array
        for (int i = 0; i < N; i++)
        {
            cin >> num;
            v.push_back(num);
        }
        vi odd, even;//split int odd and even vectors the values 
        for (int i = 0; i < N; i++)
        {
            if(i%2==0)
            {
                even.push_back(v[i]);
            }
            else{
                odd.push_back(v[i]);
            }
        }
       //now sort them like first for even indices and then for odd indices independtly.
       sort(even.begin(),even.end());
       sort(odd.begin(),odd.end());
       //now make new vector array names as vsorted and put them accordingly first for even and then  fpor odd 
       //and erase values earlier ones which is even sorted array and odd sorted array
     vi vSorted;
     for (int i = 0; i < N; i++)
     {
         if(i%2==0)
         {
             vSorted.push_back(even[0]);
             even.erase(even.begin());
         }
         else
         {
             vSorted.push_back(odd[0]);
             odd.erase(odd.begin());
         }

     }
     int flag=-1;
     //for checking the the whole array of pairs is sorted or not
     for(int i=0;i<N;i++)
     {
         if(i<N-1)
         {
            //sorted array first pair is out of order 
            if(vSorted[i]>vSorted[i+1])
            {
                flag=i;
                //when such pair is found we can get out of the loop
                break;
            }
         }
     }
     
        // Output based on whether the flag tracking inversions 
        // was triggered or not:
       if(flag == -1)
            cout << "Case #" << t << ": OK\n";
        else 
            cout << "Case #" << t << ": " << flag << "\n";

    }

    return 0;
}
