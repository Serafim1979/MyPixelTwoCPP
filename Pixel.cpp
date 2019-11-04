#include<iostream>
#include "Pixel.h"

using std::cout;
using std::cin;
using std::endl;



///////////////////////////////////////////////////////////
Pixel::Pixel(const Pixel& px)
	:Point(px), c(px.c)
{

}
///////////////////////////////////////////////////////////
Pixel::Pixel(int x, int y, const Color& clr)
	: Point(x, y), c(clr)
{

}
///////////////////////////////////////////////////////////
Pixel::Pixel(const Point& pt, const Color& clr)
	: Point(pt), c(clr)
{

}
///////////////////////////////////////////////////////////
Pixel::~Pixel()
{

}
///////////////////////////////////////////////////////////
const Pixel::Color& Pixel::GetColor()const
{
	return c;
}
///////////////////////////////////////////////////////////
void Pixel::SetColor(const Color& clr)
{
	c = clr;
}
///////////////////////////////////////////////////////////
void Pixel::Print()const
{
	Point::Print();
	cout << c;
}