#include <iostream>
using namespace std;
int inf(int a)
{
    while (a)
    {
        if (a > 0)
        {
            cout << "This is infinite loop.";
        }
    }
}
int main()
{
    int z = 1;
    inf(z);
}