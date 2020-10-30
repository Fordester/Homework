#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x[] = { -0.4,2.4,5 };
	int n = 23;
	double u =1.0;
	double y;

	for (int i = 0; i < 3; i++)
	{
		y = 3.5 * sin(x[i]) * sin(x[i]) - 2.7 * sin(x[i]) + 1;
		for (int j = 1; j <= n; j++) {
			u = (2.0 / 3.0) * u + y / (3.0 * u * u);
		}
		cout << "u = " << u << endl;
	} 
	

}
