#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[100000];
int sum;

inline int find_mid()
{
	std::sort(a, a + n);

	return a[n - 1];
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	if (n == 1)
	{
		cout << 0;
		return 0;
	}

	int mid = find_mid();

	for (int i = 0; i < n; i++)
	{
		if (a[i] != mid)
			sum += abs(a[i] - mid);
	}

	cout << sum;

	return 0;
}