// Exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;

/*

int main()
{
	cout << ceil(5.65) << endl;
	cout << floor(4.6) << endl;
	cout << ceil(-7.7) << endl;
	cout << floor(-4.6) << endl;
	cout << abs(-14 )<< endl;
    return 0;
}

*/



/*
int main()
{
	int v[10] = { 2, 6 , 4, 2, 5, 7, 1, 8, 2, 6 };

	for (int i = 1;  i < 5; i++)
	{
		v[i] = v[i] + 1;
		cout << v[i];
	}
}
*/


int main()
{
	string products[10] = { "1.condenser","2.resistance", "3.diode","4.chip.","5.memory","6.cpu","7.mainboard","8.HDD","9.SSD","10.source" };
	int price[10] = { 2,5,6,100,200,250,100,100,200,60 };
	string input;
	int inputCon = 0;
	int sum = 0;
	int totalSum = 0;
	int clientN = 0;
	string client;
	int quantity = 0;
	cout << "Please input your name" << endl;
	cin >> client;
	clientN += 1;

	while (client != "1")
	{	
		if (input == "q")
		{
			cout << "Enter a new client name or press 1 to exit the application" << endl;
			cin >> client;
			if (client != "1")
			{
				clientN += 1;
				input = "";
			}
		}

		while (input != "q")
		{
			cout << "Please select a product" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << products[i] << endl;
			}
			cin >> input;
			if (input != "q")
			{
				cout << "Please enter the quantity" << endl;
				cin >> quantity;				
				inputCon = stoi(input);
				sum += price[inputCon - 1] * quantity;
				cout << "Current sum is" << sum << endl;			
			}
			else
			{
				cout << "Total client sum is " << sum << endl;
				totalSum += sum;
			}
			
		}

		
	}
	cout << "Total number of clients is" << clientN << "and the sum is " << totalSum<<endl;

		
	}
	
	

