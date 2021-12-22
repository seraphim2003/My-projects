#include <iostream>
using namespace std;

int main()
{
	int n, max;
	cout << "enter postive integers (0 to exite): ";
	cin >> n;
	for (max = n; n > 0;)
	{
		if (n > max) max = n;
		cin >> n;
	}
	cout << "max = " << max << endl;
	getchar();
	getchar();
	return 0;
}