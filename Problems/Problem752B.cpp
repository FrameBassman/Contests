#include <iostream>

using namespace std;

int n, m, k;
char s;

inline int ceil(int x, int y)
{
	if (x % y == 0)
		return x / y;
	return x / y + 1;
}

int main()
{
	cin >> n;
	cin >> m;
	cin >> k;
	
	int no = ceil(k, 2);

	if (k % 2 == 0)
		s = 'R';
	else
		s = 'L';

	int counter = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (counter == no)
			{
				cout << i + 1 << ' ';
				cout << j + 1 << ' ';
				cout << s;

				return 0;
			}

			counter++;
		}
	}
	
	return 0;
}