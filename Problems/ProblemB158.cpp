#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long
#define mp make_pair
#define UNDEF 1000000005
#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d%d",&a,&b)

int n;
int buff;
int input_data[10000];
int result;
const int taxi_vol = 4;
list<int> input_list;
list<int>::iterator it;

inline bool compare(int& first, int& second)
{
	return first > second;
}

int main()
{
	cin >> n;

	int length = 0;
	for(length = 0; length < n; length++)
	{
		cin >> input_data[length];
	}

	input_list.sort(compare);

	return 0;
}