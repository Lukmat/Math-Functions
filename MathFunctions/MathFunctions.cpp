#include <iostream>
using namespace std;

int greatestCommonDivisor(int a,int b)
{
    int t;
  while(b)
  {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
};

int factorial(int a)
{
    if (a<2)
        return a;
    return a*factorial(a-1);
};

int fibonacci(int a)
{
    if(a==0)
        return 0;
	if(a<3 && a!=0)
		return 1;

	return fibonacci(a-2)+fibonacci(a-1);
};

double areaOfTriangle(double X0, double Y0, double X1, double Y1, double X2, double Y2)
{
    double area = ((X1 - X0)*(Y2 - Y0) - (X2 - X0)*(Y1 - Y0))/2;
    if(area >= 0)
    return area;
    else
    return -area;
};

void pascalsTriangle(int n)
{
    int i, j, x;
    string len;
    for(i = 0; i < n; i++)
    {
        x = 1;
        len = string(n - i - 1, ' ');
        cout << len;
        for(j = 0; j <= i; j++)
        {
            cout << x << " ";
            x = x * (i - j) / (j + 1);
        }
        cout << endl;
    }
}




