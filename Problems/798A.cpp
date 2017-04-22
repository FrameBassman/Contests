#include <iostream>
#include <stdio.h>
using namespace std;

const long md = 1000000007;
inline void add(long &x, long y)
{
	x += y;
	if (x >= md)
	{
		x -= md;
	}
}

char word[17];

int main()
{
	gets_s(word);

	int i = 0;
	int count = 0;
	while (word[i] != '\0')
	{
		count++;
		i++;
	}

	i = 0;
	int j = 0;
	int middleIndex = count / 2 + count % 2;
	while (middleIndex - 1>= i)
	{
		if (count - 1 - i == i)
			j++;

		if (word[i] != word[count - 1 - i])
		{
			j++;
		}
		i++;
	}

	if (count % 2 == 1 && j == 2)
	{
		cout << "YES";
		return 0;
	}

	if (j == 1)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}