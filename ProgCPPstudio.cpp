#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const int ii = 10 , jj = 10;
	int arr[ii][jj];

	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			arr[i][j] = (rand() % 156);
			cout << arr[i][j]  << "   ";
		}
		cout << "\n";
	}
	cout << "------------------------------------------------------------------------------------"<< endl;
	float min = 9999, t; int check;

	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			if (arr[i][j] < min) {
				min = arr[i][j];
				check = i;
			}
		}
	}
	int arr0[ii];int arrCheck[ii];int tt[ii];
	cout << endl << "Min row is: " << check + 1  << endl;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			if (i == 0)
			{
				arr0[j] = arr[i][j];
			}
		
			if (i == check) {
				arrCheck[j] = arr[i][j];
			}
		}
	}
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			if (i == check)
			{
				 arr[i][j] = arr0[j];
			}

			if (i == 0) {
				 arr[i][j] = arrCheck[j];
			}
		}
	}
	cout << "-------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << "\n";
	}
		return 0;
}

