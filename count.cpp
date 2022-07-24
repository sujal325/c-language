#include <iostream>
using namespace std;
int sum(int a)
{
    cout << "counted value is " << a << endl;
}
int main()
{
    int p, x = 0;
    while (p)
    {
        cin >> p;
        x += p;
        sum(x);
    }
}