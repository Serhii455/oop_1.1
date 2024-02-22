 //1.1.cpp
#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle makeTringle(int x, int y)
{
	Triangle nn;
	if (!nn.Init(x, y))
		cout << "Wrong argument to Init" << endl;
	return nn;
}

int main()
{
	Triangle n;
	n.Read();
	n.Display();
	n.Hypotenuse();

	Triangle i;
	int a, b;

	cout << "First = ? "; cin >> a;
	cout << "Second = ?"; cin >> b;

	i = makeTringle(a, b);
	i.Display();

	return 0;
}