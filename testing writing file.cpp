#include <iostream>
#include <fstream>
using namespace std ;

int main () {
	
ofstream write ;
write.open("program3data.txt");

float num1, num2, num3, num4, num5;

cout << "Enter the first number: ";
cin >> num1;
write << "Enter the second number: ";
cin >> num2;
write << "Enter the third number: ";
cin >> num3;
write << "Enter the fourth number: ";
cin >> num4;
write << "Enter the fifth number: ";
cin >> num5;
write.close();

 return 0 ;
}

