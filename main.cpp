#include<iostream>
#include"Pixel.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Pixel a(10, 20, Pixel::red);
	cout << "Pixel a: ";
	a.Print();
	cout << endl;

	Pixel b(Point(30, 40), Pixel::blue);
	cout << "Pixel b: ";
	b.Print();
	cout << endl;

	b.SetColor(Pixel::green);
	b.Move(10, 20);
	cout << "Pixel b: ";
	b.Print();
	cout << endl;

	cout << "Distance = " << a.Dist(b) << endl;
	cout << "Color of Pixel b = " << b.GetColor() << endl;

	Pixel c = a;
	cout << "Pixel c: ";
	c.Print();
	cout << endl;

	system("pause");
	return 0;
}