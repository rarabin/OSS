#include<iostream>
using namespace std;

int main()
{
	// 구구단 : 1단부터 9단까지

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << '\t' << i + 1 << " * " << j + 1 << " = " << (i + 1) * (j + 1) << endl;
		}
	}

	return 0;
}