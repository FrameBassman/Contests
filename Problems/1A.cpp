#include <iostream>

using namespace std;

long n, m, a;

const long md = 1000000007;

inline void add(long &x, long y)
{
	x += y;
	if (x >= md)
	{
		x -= md;
	}
}

inline long mul(long x, long y)
{
	return (long long)x * y & md;
}

long long ceil(long long x, long long y)
{
	if (x % y == 0)
		return x / y;
	return x / y + 1;
}

int a1_main()
{
	cin >> n;
	cin >> m;
	cin >> a;

	cout << ceil(m, a) * ceil(n, a);

	return 0;
}