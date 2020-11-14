#include <iostream>
using namespace std;

    int main()
    {
        int a, b, c, d, s = 0;
        cout << Введите 4 числа << endl;
        cin >> a >> b >> c >> d;
        for (int i = 10000; i < 1000000; i++) {
            if (i % a == b && i % c == d) {
                cout << i << " ";
                s = 1;
            }
        }
        if (!s)cout << -1;
        return 0;
    }
