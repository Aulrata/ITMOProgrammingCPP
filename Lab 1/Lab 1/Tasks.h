#pragma once


//task 2
void SumPtr(int*, int*);
void SumRef(int&, int&);

//task 5
void GetFractionalPartPtr(double*);
void GetFractionalPartRef(double&);

//task 10
struct Point
{
	double x, y;
};

struct Square
{
	double leftBottomX1, leftBottomY1;
	double height;
};

void MoveSquarePtr(Square*, Point* );
void MoveSquareRef(Square&, Point& );

//task 13
struct ComplexNumber
{
	double realPart, imaginaryPart;
};

void GetConjugateNumberPtr(ComplexNumber*);
void GetConjugateNumberRef(ComplexNumber&);



