#include "Tasks.h"
#include <iostream>
#include <cmath>

//task 2
void SumPtr(int* x, int* y) // ���������
{
	 *x += *y;
}

void SumRef(int& x, int& y)	// ������
{
	x += y;
}

//task 5
void GetFractionalPartPtr(double* x)
{
	*x -= floor(*x);
}

void GetFractionalPartRef(double& x)
{
	x -= floor(x);
}

//task 10
void MoveSquarePtr(Square* sqr, Point* ptr)
{
	sqr->leftBottomX1 += ptr->x;
	sqr->leftBottomY1 += ptr->y;
}

void MoveSquareRef(Square& sqr, Point& ptr)
{
	sqr.leftBottomX1 += ptr.x;
	sqr.leftBottomY1 += ptr.y;
}


//task 13
// ����� -> ����� � ����� � ��� �� �������� (.) ����� ������� � ��������� � ����������
void GetConjugateNumberPtr(ComplexNumber* compNum)	
{
	compNum->imaginaryPart *= (-1);
}

// � ��� � ��� ������� ����� ���������� � ����� (.) � ��������� � ����������
void GetConjugateNumberRef(ComplexNumber& compNum)
{
	compNum.imaginaryPart *= (-1);
}


