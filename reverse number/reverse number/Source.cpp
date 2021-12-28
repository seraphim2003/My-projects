#include <iostream>
using namespace std;

int main()
{
	long m, d, n = 0;
	cout << "enter a posative number ";
	cin >> m;
	while (m > 0)
	{
		d = m % 10;
		m /= 10;
		n = 10 * n + d;
	}
	cout << "the reverse is " << n << endl;

	getchar();
	getchar();
	return 0;
}