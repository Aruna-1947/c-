#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int side,base,height,rad,length,breadth;
	int square,rectangle;
	float triangle,circle;
	cout <<"Enter the length of the side a square : \n";
	cin >>side;
	square=side*side;
	cout <<"The area of the given square is : \n"<<square;
	
	cout <<"Enter the base length of a triangle : \n";
	cin >>base;
	cout <<"Enter the height of a triangle : \n";
	cin >>height;
	triangle=(0.5)*base*height;
	cout <<"The area of the triangle is : \n"<<triangle;
	
	cout <<"Enter the radius of a circle : \n";
	cin >>rad;
	circle=(2*3.142)*(rad*rad);
	cout <<"The area of the given circle is : \n"<<circle;
	
	cout <<"Enter the length of a rectangle : \n";
	cin >>length;
	cout <<"Enter the breadth of a rectangle : \n";
	cin >>breadth;
	rectangle=length*breadth;
	cout <<"The area of the given rectangle is : \n"<<rectangle;
	
	return 0;
}
