#include <iostream>
using namespace std;
int my(int a)
{
    int n = 2, r;
    while (n < a)
    {
        r = (a % n);
        if (r == 0)
        {
            break;
        }
        n += 1;
    }
    if (r == 0)
    {
        cout << "This is not prime number.";
    }
    else
    {
        cout << "This is a prime number.";
    }
}

int main()
{
    int b;
    cout << "Type a number: ";
    cin >> b;
    my(b);
}