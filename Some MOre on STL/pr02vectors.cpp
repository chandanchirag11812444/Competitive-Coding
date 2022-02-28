#include <bits/stdc++.h>
using namespace std;
void printV(vector<string> &v)
{
    cout << "size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
   
    cout << endl;
}
int main()
{

//for string


vector <string> v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
  string s;
  cin>>s;
  printV(v);
  v.push_back(s);



}
printV(v);



    //    vector <int> v;
    //    v.push_back(2);
    //    v.push_back(5);
      
    //    vector <int> &v1=v;//Time Complexity Big O(n);
    //   v1.push_back(3);
       
    //    printV(v);
    //    printV(v);
    //    printV(v1);























    // vector<int> v(10,2); // here size woulbe 11 total and 7 will fit at last remainig 3 10 times bigO(n);
    // v.push_back(7);

    // printV(v);
    // v.pop_back();
    // printV(v);

    //     vector<int> v; // In vectors we can change size;
    //     int n;
    //     cin >> n;
    //     for(int i=0;i<n;i++)
    //     {
    //         int x;
    //         cin>>x;
    //         printV(v);//first 1 size ke liye call hoga for 2 then upto to nsize
    //         v.push_back(x);
    //     }
    //    printV(v);
    return 0;
}