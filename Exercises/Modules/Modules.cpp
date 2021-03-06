// Modules.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "math.h"


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

	for (i = 0; i < n; i++)
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

	for (i = 0; i < n; ++i)
	{
		X.push_back(V[i] * t*cos(A[i]));
		Y.push_back(V[i] * t*sin(A[i]) - g * t*t / 2);
	}
	Xmax = X[0];
	k = 1;
	Ymin = Y[0];
	j = 1;
	for(i=0; i<n; i++)
	{
		if (X[i] > Xmax)
		{
			Xmax = X[i];
			k = i;
		}
		if (Y[i] < Ymin)
		{
			Ymin = Y[i];
			j = i;
		}

	}

	cout << Xmax << V[k]<< A[k]<< Ymin<< V[j]<< A[j] << endl;

    return 0;
}

