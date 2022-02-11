#include <iostream>
#include <vector>
using namespace std;
void fprinF(int arr[], int n, vector<int> &array, int index)
{
    if (index == n)
    {
        for (auto it : array)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    array.push_back(arr[index]);
    fprinF(arr, n, array, index + 1);
    array.pop_back();
    fprinF(arr, n, array, index + 1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    vector<int> array;
    fprinF(arr, n, array, 0);

    return 0;
}