#include <iostream>
#include <algorithm>
using namespace std;
void gr(int a, int b)
{
    int com;
    com = max(a, b);
    cout << com;
}
int main()
{
    int c, d;
    cin >> c >> d;
    gr(c, d);
}