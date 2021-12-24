#include <iostream>
using namespace std;

class Ratio
{
	public:
		Ratio() { cout << "Object is born.\n"; }
		~Ratio() { cout << "Objecr dies. \n"; }

	private:
		int num, den;
};
int main()
{
	{
		Ratio x;
		cout << "now x is alive.\n";
	}
	cout << "now between blocks.\n";
	{
		Ratio y;
		cout << "now y is alive.\n";
	}
	getchar();
	return 0;
}