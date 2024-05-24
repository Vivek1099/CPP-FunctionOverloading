//Q> Wrtie a program to demonstrate function overloading wihout using a class.

#include<iostream>
using namespace std;

int area(int l, int w)
{
	return l*w;
}
float area(float b, float h)
{
	return 0.5*b*h;
}
float area(int r)
{
	return 3.1*r*r;
}

int main()
{
	int a1=area(2,4);
	cout<<"\nArea of rectangle: "<<a1;
	float a2=area(3.2f,2.2f);
	cout<<"\nArea of triangle: "<<a2;
	float a3=area(4);
	cout<<"\nArea of circle: "<<a3;
	return 0;
}

