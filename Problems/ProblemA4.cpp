#include <iostream>

using namespace std;

int w;

int a4_main()
{
	cin >> w;

	for (int i = 2; i < w / 2 + 1; i++)
	{
		if (w % i == 0)
		{
			cout << "YES";
			return 0;
		}
		i++;
	}

	cout << "NO";

	return 0;
}