#include<iostream>
using namespace std;

class shapes
{	public:
	void area(float r)
	{	cout<<"\n\nArea of Circle: "<<3.142*r*r;
	}
	void area(float l, float b)
	{	cout<<"\n\nArea of Rectangle: "<<l*b;
	}	;'[[]]'	
};
int main()
{	shapes s;
	s.area(10);	//Calculates Area of Circle	
	s.area(5.0, 4.0);	//calculates area of rectangle
	return 0;
}
