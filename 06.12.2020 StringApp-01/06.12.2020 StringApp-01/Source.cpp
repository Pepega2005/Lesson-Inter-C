#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	char text[50] = "";
	cin.getline(text, 49);

	for (int i = 0; i < sizeof(text)-1; i++)
	{
		if (text[i] == ' ')
		{
			a++;
		}
	}
	cout << a << endl;

	system("pause");
}