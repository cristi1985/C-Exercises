// DetPlatou.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int M[3][3];
int lp = 1;
int cp;
int i;
int y;



int main()
{
	for (i = 0; i <= 4; i++)
	{
		for (y = 0; y <= 4; y++)
		{
			cout << "Please enter the altitude ";
			cin >> M[i][y];
		}

	}
	
	cp = M[0][0];
	for (int k = 1; k <= 4; k++)
	{
		for (int c = 1; c <= 4; c++)
		{
			if (M[k][c] == cp)
			{
				lp = lp + 1;
			}
			else
			{
				if (lp >= 3)
				{
					cout << "There is a platou at the alt of: " << cp;
				}
				lp = 1;
				cp = M[k][c];
			}
		}

	}
	
	if (lp >= 3)
	{
		cout << "There is a platou at the alt of: " << cp;
	}


	
		
    return 0;
}

