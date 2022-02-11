#include <iostream>
using namespace std;
int f(int i)
{
    if (i <= 1)
    {
        return i;
    }
    int ffirst = f(i - 1);
    int flast = f(i - 2);
    return f(i - 1) + f(i - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);

    return 0;
}