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

long ceil(long x, long y)
{
	add(x, y);
	return (x - 1) / y;
}

int main()
{
	cin >> n;
	cin >> m;
	cin >> a;

	cout << mul(ceil(m, a), ceil(n, a));

	return 0;
}