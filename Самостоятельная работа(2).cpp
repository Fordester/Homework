#include <iostream>
#include <cmath>

using namespace std;
bool s(int x)
{
    for (int i = 2; i * i < x; i++)
        if (x % i == 0) return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (s(n))
        cout << "prime";
    else
        cout << "composite";
    return 0;
}
