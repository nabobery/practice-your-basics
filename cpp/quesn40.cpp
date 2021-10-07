//Author: Jitin CS20B1075
#include <iostream>
using namespace std;
void solve()
{
	int r1, r2, c1, c2;
	cout << "Enter rows and columns in matrix 1 and 2\n";
	cin >> r1 >> c1 >> r2 >> c2;
	if (c1 != r2)
	{
		cout << "incompatible\n";
		exit(EXIT_FAILURE);
	}

	int m1[r1][c1], m2[r2][c2];

	cout << "Enter matrix 1\n";
	for (auto &row : m1)
	{
		for (auto &col : row)
		{
			cin >> col;
		}
	}

	cout << "Enter matrix 2\n";
	for (auto &row : m2)
	{
		for (auto &col : row)
		{
			cin >> col;
		}
	}

	int m[r1][c2]; //result matrix
	//Initialize to 0;
	for (auto &row : m)
	{
		for (auto &col : row)
		{
			col = 0;
		}
	}

	//Multiplication O(n^3)
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			for (int k = 0; k < r2; k++)
			{
				m[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}

	cout << "The product matrix is\n";
	for (auto &row : m)
	{
		for (auto &col : row)
		{
			cout << col << " ";
		}
		cout << "\n";
	}
}
int main()
{
	solve();
	return 0;
}