#include <iostream>

using std::cout;
using std::cin;

int main(void)
{
	int n;
	cin >> n;
	int problems_solved = 0;
	for(int i = 0; i < n; ++ i)
	{
		int sum = 0;
		for(int j = 0; j < 3; ++ j)
		{
			int t;
			cin >> t;
			if(t)
				sum ++;
		}
		if(sum >= 2)
			problems_solved ++;
	}
	cout << problems_solved << "\n";
	return 0;
}