#include <iostream>
using namespace std;

    int main()
    {
        int a, b, c, d, f = 0;
        cin >> a >> b >> c >> d;
        for (int i = 10000; i < 1000000; i++) {
            if (i % a == b && i % c == d) {
                cout << i << " ";
                f = 1;
            }
        }
        if (!f)cout << -1;
        return 0;
    }
