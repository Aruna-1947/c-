#include <iostream>
#include <conio.h>

using std :: cout ;

int HexToDec (int &) ;

int main ()
{
	int Dec , a ;
	Dec = HexToDec (a) ;
	cout << Dec ;
	getch () ;
	cout << & a ;
	getch () ;
}

int HexToDec (int & Hex)
{
	int HexTranslator ;
	short i = 0 ;
	while (Hex)
		HexTranslator = (16 * i) * (Hex % 16) , Hex /= 16 , i++ ;
	return HexTranslator ;
}
