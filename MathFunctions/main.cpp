#include <iostream>
#include "MathFunctions.h"

using namespace std;

int main()
{

    cout<<"The biggest common divider is: "<<biggestCommonDivider(3,6)<<endl;
    cout<<"The Factorial of 5 is: "<<factorial(5)<<endl;
    cout<<"The eight number of the fibonacci sequence is: "<<fibonacci(8)<<endl;
    cout<<"The area of the triangle is: "<<areaOfTriangle(5,6,3,4,4,3)<<endl;
    cout<<"Pascals triangle: "<<endl; pascalsTriangle(5);

    return 0;
}

