#include <iostream>

using namespace std;
int sum(int n)
{
    int o = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            o += i;
        }
        else
        {
            o;
        }
    }
    cout << o;
}
int main()
{
    int a;
    cin >> a;
    sum(a);
}