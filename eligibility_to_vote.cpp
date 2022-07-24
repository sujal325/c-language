#include <iostream>
using namespace std;
int eligibility(int a)
{
    if (a >= 18)
    {
        cout << "Eligible to vote.";
    }
    else
    {
        cout << "Not eligible to vote.";
    }
}
int main()
{
    int b;
    cin >> b;
    eligibility(b);
}