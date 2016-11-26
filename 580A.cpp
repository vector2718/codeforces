#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0; i < n; ++ i)
		cin >> a[i];

	int *dp = new int[n];
	dp[0] = 1;
	for(int i = 1; i < n; ++ i)
	{
		if(a[i] >= a[i - 1])
			dp[i] = dp[i - 1] + 1;
		else
			dp[i] = 1;
	}

	cout << *std::max_element(dp, dp + n) << endl;

	delete[] dp;
	delete[] a;
	return 0;
}