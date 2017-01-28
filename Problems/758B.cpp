#include <iostream>

using namespace std;

char s[107];

int counter[4];
char mask[4];

int main()
{
	cin >> s;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '!')
		{
			counter[i % 4]++;
		}

		if (mask[i % 4] == 'R' || mask[i % 4] == 'B' || mask[i % 4] == 'Y' || mask[i % 4] == 'G'){}
		else
			mask[i % 4] = s[i];

		i++;
	}

	for (int j = 0; j<4;j++)
	{
		if (mask[j] == 'R')
			cout << counter[j] << " ";
	}
	
	for (int j = 0; j<4;j++)
	{
		if (mask[j] == 'B')
			cout << counter[j] << " ";
	}

	for (int j = 0; j<4;j++)
	{
		if (mask[j] == 'Y')
			cout << counter[j] << " ";
	}
	
	for (int j = 0; j<4;j++)
	{
		if (mask[j] == 'G')
			cout << counter[j];
	}

	return 0;
}