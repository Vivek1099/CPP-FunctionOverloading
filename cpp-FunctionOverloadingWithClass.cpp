
//Q> Wrtie a program to demonstrate function overloading using a class.

#include<iostream>
using namespace std;

class A
{
	public:
		int area(int l, int w)
		{
			return l*w;
		}
		float area (float b, float h)
		{
			return 0.5*b*h;
		}
		float area(int r)
		{
			return 3.14*r*r;
		}
};

int main()
{
	A x;
	int a=x.area(10,20);
	cout<<"\nArea of rectangle: "<<a;
	int a1=x.area(2,4);
	cout<<"\nArea of triangle: "<<a1;
	int a2=x.area(3);
	cout<<"\nArea of circle: "<<a2;
	return 0;
}
