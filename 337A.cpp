#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int n, m;
	cin >> n >> m;
	int *f = new int[m];
	for(int i = 0; i < m; ++ i)
		cin >> f[i];
	std::sort(f, f + m);
	for(int i = 0; i <= m - n; ++ i)
		f[i] = f[i + n - 1] - f[i];
	cout << *std::min_element(f, f + m - n + 1) << endl;
	delete[] f;

	return 0;
}