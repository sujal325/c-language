#include <iostream>

using namespace std;
int avg(int p, int q, int r)
{
    int add, divide;
    add = p + q + r;
    divide = add / 3;
    cout << divide;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    avg(a, b, c);
}