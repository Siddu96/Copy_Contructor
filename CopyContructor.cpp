#include<iostream>
using namespace std;

class A {

public:
	int x, y;
	int* ptr;
	A()
	{
		ptr = new int;
		//cout << ptr << endl;

		cout << "para CTOR" << endl;
	}
	A(const A& old)
	{
		x = old.x;
		y = old.y;
		ptr = new int;
		*ptr = *(old.ptr);
		cout << "Copy CTOR" << endl;
		
	}
	void givedetals(int a, int b, int c)
	{
		x = a;
		y = b;
		*ptr = c;
	}
	void print()
	{
		cout << x << " " << y << endl;
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	~A()
	{
		delete ptr;
		cout << "DTOR" << endl;
	}

};

int main()
{
	A obj1;
	obj1.givedetals(10, 20, 30);
	obj1.print();
	A obj2 = obj1;
	obj2.print();

}