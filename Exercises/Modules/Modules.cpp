// Modules.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>


using namespace std;

int n,  Xmax, Ymin, k, j, i;
vector <int> V;
vector <int> A;
vector <int> X;
vector <int> Y;
int t = 10;
int g = 9.8;


int main()
{
	cout << "Introduce the number of tries " << endl;
	cin >> n;

	for (i = 1; i < n; i++)
	{	
		int x;
		cout << "Enter the speed:" << endl;
		cin >> x;
		V.push_back(x);

		int y;
		cout << "Enter the angle:" << endl;
		cin >> y;
		A.push_back(y);
	}

	for (i = 1; i < n; i++)
	{
		X[i] = V[i] * t*cos(A[i]);
		Y[i] = V[i] * t*sin(A[i]) - g * t*t / 2;
	}
	Xmax = X[1];
	k = 1;
	Ymin = Y[1];
	j = 1;
	{

	}

    return 0;
}

