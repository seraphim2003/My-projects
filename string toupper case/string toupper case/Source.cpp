#include<iostream>
#include<string>
using namespace std;

int main()
{
	string lwTxt;

	cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
	getline(cin, lwTxt);

	for (int i = 0; i < lwTxt.length(); i++)
	{
		lwTxt[i] = toupper(lwTxt[i]);
	}

	cout << "\nThe Given String in Uppercase = " << lwTxt;

	getchar();
	getchar();
	return 0;
}