//Triangle.h
#pragma once

class Triangle
{
private:
	int first;
	int second;

public:
	int GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(unsigned int value);

	bool Init(int x, int y);
	void Display();
	void Read();

	//void Power(int a, int b);
	int Hypotenuse();
};