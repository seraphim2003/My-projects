#include <iostream>
using namespace std;

int main()
{
	int myArr[5];

	for (int x = 0; x < 5; x++) {
		myArr[x] = 42;
		cout << x << ": " << myArr[x] << endl;
	}
	system("pause");
}