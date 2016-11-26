#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;

int main(void)
{
	int n;
	cin >> n;
	int *groups = new int[n];
	for(int i = 0; i < n ; ++ i)
		cin >> groups[i];

	std::sort(groups, groups + n,
			[](const int &a, const int &b) -> bool
		{
			return a > b;
		});

	int cars = 0;
	int j = n - 1;
	for(int i = 0; i < n; ++ i)
	{
		if(i > j)
			break;
		int sum = groups[i];
		while(sum + groups[j] <= 4)
		{
			sum += groups[j];
			j --;
		}
		cars ++;
	}

	cout << cars << "\n";
	
	delete[] groups;
	return 0;
}