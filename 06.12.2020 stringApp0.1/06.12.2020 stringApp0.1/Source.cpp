#include <iostream>
using namespace std;

// С-строки

int main()
{
	char text1[50] = "", a;
	int c;
	cin.getline(text1, 49);
	cin >> a;
	for (int i = 0; i < sizeof(text1); i++)
	{
		if (text1[i] != '\0')
		{
			if (text1[i] == a)
			{
				c = sizeof(text1) - i;
				for (int j = i; j <= sizeof(text1) - c; j++)
				{
					text1[j] = text1[j + 1];
				}					
			}
		}
	}
	cout << text1 << endl;

	system("pause");
}