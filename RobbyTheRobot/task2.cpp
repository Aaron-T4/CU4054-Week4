#include <iostream>
#include "GraphicsManager.h"	

using namespace std;

int main()
{
	int age;
	int totalPeople = 0;
	double totalCost = 0.0;
	const double under16Price = 2.50;
	const double over65Price = 3.00;
	const double regularPrice = 5.00;
	const double discountRate = 0.20;

	std::cout << "Enter your age: ";
	while (true)
	{
		cin >> age;
		if (age == -1)
		{
			break;
		}

		else if (age < 0)
		{
			cout << "Invalid age";
		}

		else if (age <= 16)
		{
			totalCost += under16Price;
			

		}


		else if (age > 65)
		{
			totalCost += over65Price;
		}

		else
		{
			totalCost += regularPrice;
		}
		totalPeople++;
	}

	if (totalPeople >= 6)
	{
		totalCost *= discountRate;

	}

	cout << "Group size: "<< totalPeople << endl;
	cout << "The total cost is: £ " << totalCost;


}
