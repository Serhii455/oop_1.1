//Triangle.cpp
#include "Triangle.h"
#include <iostream>

using namespace std;

void Triangle::SetFirst(int value)
{
	first = value;
}

void Triangle::SetSecond(unsigned int value)
{
	second = value;
}

bool Triangle::Init(int x, int y)
{

	if (x <= 0 || y <= 0)
	{
		first = 0;
		second = 0;
		return false;
	}
	else {
		first = x;
		second = y;
		return true;
	}
}

void Triangle::Display() 
{
	cout << "First Cat = " << first << "   " << "Second Cat = " << second << endl;
}

void Triangle::Read()
{
	int x, y;

	do
	{
		cout << "Enter the first = ";
		cin >> x;
		cout << "Enter the second = ";
		cin >> y;
		if (!Init(x, y))
		{
			cout << "Wrong catets, enter the walid values!" << endl;
		}
	} while (!Init(x, y));

}

int Triangle::Hypotenuse()
{
	int result, temporaryResult;
	temporaryResult = pow(first, 2) + pow(second, 2);
	result = sqrt(temporaryResult);

	cout << "Result = " << result << endl;
	return result;
}