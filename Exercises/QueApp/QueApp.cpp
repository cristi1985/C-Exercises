// QueApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> F(100);
int n;
int first;
int last;
int number;
int option;


int main()
{
	option = 0;
	while (option != 5)
	{
		cout << "1.Create a waiting que" << endl;
		cout << "2.Entering a new element" << endl;
		cout << "3.Discarding an element" << endl;
		cout << "4.Walking through the que and show vakues" << endl;
		cout << "5.Exit program" << endl;
		cout << "Enter one of the options 1,2,3,4,5" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Insert a value to define the capacity of the waiting que" << endl;
			cin >> n;
			if (n < 100)
			{

				for (int i = 0; i < n; i++)
				{
					cout << F[i] << endl;
				}

				first = 0;
				last = 0;

			}
			else
			{
				cout << "The value you entered is higher than 100";
			}
			break;

		case 2:
			if (first == 0)
			{
				first = 1;
				cout << "Insert value for the first element" << F[first] << endl;
				cin >> F[first];
				last = first;
			}
			else
			{
				cout << "The que is not empty" << endl;
			}
			last = last + 1;

			if (last <= n)
			{
				cout << "Introduce the value for the last element" << F[last] << endl;
				cin >> F[last];
			}
			else
			{
				cout << "The que is full" << endl;
			}
			break;
		case 3:
			if (first == 0)
			{
				cout << "Operation impossible the que is empty" << endl;
			}
			else
			{
				cout << "The element " << F[first] << endl;

				// que advances sequence A
				for (int i = first; i <= last - 1; i++)
				{
					F[i] = F[i + 1];
				}
				F[last] = 0;
				last = last - 1;
				if (last == 0)
				{
					first = 0;
				}

				// sequence B

				if (first < last)
				{
					F[first] = 0;
					first = first + 1;
				}
			}
			break;

		case 4:
			//sequence for showing up elements of the que and the length of the que
			if (first == 0)
			{
				cout << "Operation impossible, empty que" << endl;
			}
			else
			{
				number = 0;
				for (int i = first; i <= last; i++)
				{
					cout << F[i] << endl;
					number = number + 1;
				}
				cout << "The que cotains " << number << "elements" << endl;
			}
			break;
		case 5:
			cout << "Bye bye!" << endl;
			break;
		}

	}
	return 0;
}

