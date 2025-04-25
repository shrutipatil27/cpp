#include<iostream>
using namespace std;

class parent
{	public:
	virtual void show()
	{	cout<<"\n\nParent Class.";
	}
	virtual void disp()
	{
	}	
};
class child: public parent
{	public:
	void show()
	{	cout<<"\n\nChild Class.";
	}
	void disp()
	{	cout<<"\n\nin disp method.";
	}
};
int main()
{	parent *p;
	child c;
	p=&c;
	p->show();
	p->disp();
	return 0;
}
