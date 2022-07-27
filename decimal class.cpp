#include <iostream>
using namespace std ;

class Decimal_to_All {
	
	private :
		 
		 int  number ;
		 int remainder ; 
		 int i = 1 ;
		 int binary ;
	
	public :
	
		void set_number ( int n ) {
			number = n ;
		}
//		void set_remainder ( int r ) {
//			remainder = r ;
//		}
//		void set_number ( int c ) {
//			converter = c ;
//		}
	
	void decimal_to_binary () {
	
	
	
	while ( number != 0 ) {
		
		remainder = number % 2 ;
		number = number / 2 ;
		binary = binary+(remainder*i);
		i = i * 10 ;
		
	}
	cout << " Converted Into Binary:-> " << binary ;
		}
	
	int get_number () {
		return number ;
	}
	
	void display () {
		cout << " Decimal Number " << get_number() ;
		
    }
	
}; 

int main () {

	Decimal_to_All  DTB ;
	int temp ;
	cout << " Enter Decimal Number:-> " ;
	cin >> temp ;
	DTB.set_number(temp);
	DTB.display();

  return 0 ;
}

