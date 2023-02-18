#include <iostream>
#include "Tasks.h"
#include <cmath>

using namespace std;


int main()
{


    // task 2
    int fisrtNumber = 3;
    int secondNumber = 4;
    int resultSum = fisrtNumber + secondNumber;

    SumPtr(&fisrtNumber, &secondNumber);
    if (fisrtNumber == resultSum)
        cout << "Test of second task was successful(Ptr)" << endl;
    else cout << "Test of second task failed(Ptr)" << endl;

    
    resultSum += secondNumber;

    SumRef(fisrtNumber, secondNumber);
    if(fisrtNumber == resultSum)
        cout << "Test of second task was successful(Ref)" << endl;
    else cout << "Test of second task failed(Ref)" << endl;


    //task 5
    double realNumber = 3.8312873132;
    double result = realNumber - 3.0;

    GetFractionalPartPtr(&realNumber);
    if (realNumber == result)
        cout << "Test of fifth task was successful(Ptr) " << endl;
    else cout << "Test of fifth task failed(Ptr)" << endl;


    realNumber = 4.90342313;
    result = realNumber - 4.0;

    GetFractionalPartRef(realNumber);
    if (realNumber == result)
        cout << "Test of fifth task was successful(Ref)" << endl;
    else cout << "Test of fifth task failed(Ref)" << endl;


    //task 10
    Square sqr;
    sqr.leftBottomX1 = 0.5;
    sqr.leftBottomY1 = 0.5;
    sqr.height = 2;

    Point ptr;
    ptr.x = 2;
    ptr.y = 2;
    

    double resultX = ptr.x + sqr.leftBottomX1;
    double resultY = ptr.y + sqr.leftBottomY1;

    MoveSquarePtr(&sqr, &ptr);

    if (sqr.leftBottomX1 == resultX && sqr.leftBottomY1 == resultY)
        cout << "Test of tenth task was successful(Ptr)" << endl;
    else cout << "Test of tenth task failed(Ptr)" << endl;


    resultX = ptr.x + sqr.leftBottomX1;
    resultY = ptr.y + sqr.leftBottomY1;

    MoveSquareRef(sqr, ptr);

    if (sqr.leftBottomX1 == resultX && sqr.leftBottomY1 == resultY)
        cout << "Test of tenth task was successful(Ref)" << endl;
    else cout << "Test of tenth task failed(Ref)" << endl;

    //task 13

    ComplexNumber compNumber = {3.54, -2.03};
    double resultComp = (-1) * compNumber.imaginaryPart;
    GetConjugateNumberPtr(&compNumber);

    if (compNumber.imaginaryPart == resultComp)
        cout << "Test of thirteenth task was successful(Ptr)" << endl;
    else cout << "Test of thirteenth task failed(Ptr)" << endl;

    resultComp = (-1) * compNumber.imaginaryPart;
    GetConjugateNumberRef(compNumber);

    if (compNumber.imaginaryPart == resultComp)
        cout << "Test of thirteenth task was successful(Ref)" << endl;
    else cout << "Test of thirteenth task failed(Ref)" << endl;










    /*cout << "First number: ";
    cin >> fisrtNumber;
    cout << "Second number: ";
    cin >> secondNumber;
    cout << "Real number";
    cin >> realNumber;*/


}

