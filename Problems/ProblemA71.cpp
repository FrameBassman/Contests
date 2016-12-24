#include <iostream>

using namespace std;

char input_data[100][101];
int n;

inline void push(char* output)
{
	cout << output << '\n';
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input_data[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (input_data[i] == "localization")
		{
			push("l10n");
		}
		else if (input_data[i] == "internationalization")
		{
			push("i18n");
		}
		
		int k = 1;
		for (; input_data[i][k] != '\0'; k++)
		{
		}
		if (k > 10)
		{
			cout << input_data[i][0] << k - 2 << input_data[i][k - 1] << '\n';
		}
		else
		{
			cout << input_data[i] << '\n';
		}
	}

	return 0;
}