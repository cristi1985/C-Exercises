// BidimArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int R[10][10];
int l, c, i, j, d = 1, n;



int main()
{
	cout << "Numarul de persoane ="; cin >> n;
	while (d)
	{
		cout << "Prietenie intre:";
		cin >> i >> j;
		//relatie de prietenie reciproca
		R[i][j] = 1, R[j][i] = 1;
		cout << "mai sunt prieteni?";
		cin >> d;

	}
	
	for (l = 0; l < n; l++)
	{
		cout << endl;
		for (c = 0; c < n; c++)
			cout << R[l][c] << " ";
	}
    return 0;
}

