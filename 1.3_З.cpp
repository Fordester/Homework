#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 13;
	double eps = 2.5;
    int* a = new int[n];
	int* b = new int[n];
	a[0] = 1.5;
	b[0] = -0.14;
	for (int i = 1; i < n; i++)
	{
		a[i] = (1 - a[i - 1]) / (1 + b[i - 1] * b[i - 1]) * sin(a[i - 1] * a[i - 1] + a[i - 1] * b[i - 1] + 2);
		b[i] = 0.8 + 2 * sin(b[i - 1]) - 5.5 * sin(a[i - 1]) * sin(a[i - 1]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] * a[i] - b[j] * b[j]< eps) {
				cout << a[i] << endl;
				break;
			}
		}
	}
	delete[] b;
	delete[] a;

}
