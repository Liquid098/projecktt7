#include <iostream>
using namespace std;
int main()
{
	cout << "\n Marrix18. \n";
	int m, n, k;
	int amount = 0;
	long long int composition = 1;
	cout << "enter the dimension M and N or the array: ";
	cin >> m >> n;
	int array[100][100] = {};
	cout << "enter array elements:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> array[i][j];
		}
	}
	cout << "enter value K:";
	cin >> k;
	for (int i = 0; i < m; i++)
	{
		int j = k - 1;
		amount += array[i][j];
		composition *= array[i][j];
	}
	cout << "Sum:" << amount << "Work:" << composition;
}
