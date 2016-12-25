#include <iostream>

using namespace std;

int n;
int a[1000];
int result;

int main()
{
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n - 2; i++)
	{
		if (a[i] > 3 & a[i + 1] > 3 & a[i + 2] > 3)
		{
			result++;
			i += 2;
		}
	}

	cout << result;

	return 0;
}