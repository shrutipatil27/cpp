#include<iostream>
using namespace std;

class parent
{	public:
	void show()
	{	cout<<"\n\nParent Class.";
	}
};
class child: public parent
{	public:
	void show()
	{	cout<<"\n\nChild Class.";
	}
};
int main()
{	parent p;
	child c;
	p.show();
	c.show();
	return 0;
}
