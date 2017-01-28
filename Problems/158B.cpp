#include <iostream>
//#include <vector>
//#include <stack>
//#include <string>
#include <algorithm>
using namespace std;

#define ll long long
#define mp make_pair
#define UNDEF 1000000005
#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d%d",&a,&b)

int n;
int buff;
int da[10000];
int b[10000];
int result;
const int taxi_vol = 4;

inline bool compare(int& first, int& second)
{
	return first > second;
}

int main()
{
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> da[i];
	}

	int re = 0;

	for (int i = 0; i < n; i++)
	{
		if (da[i] == taxi_vol)
		{
			re++;
			b[i] = 1;
			continue;
		}

		for (int j = i + 1; j < n; j++)
		{
			if (b[j] == 0)
			{
				if (da[i] + da[j] == taxi_vol)
				{
					re++;
					b[i] = 1;
					b[j] = 1;
					break;
				}
			}
			
		}
	}

	return 0;
}