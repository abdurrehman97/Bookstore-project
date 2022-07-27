#include <iostream>
using namespace std ;

class Book {
	
private:

	string name ;
	int isbn ;
	string code ;
	float sale_price ;
	float buying_price ;
	
public: 

	void set_name ( string n ) {
		name = n ;
	}
	void set_isbn ( int i ) {
		isbn = i ;
	}
	void set_code ( string c ) {
		code = c ;
	}
	void set_sale_price ( float s ) {
		sale_price = s ;
	}
	void set_buying_price ( float b ) {
		buying_price = b ;
	}
	
	Book (){
    	// Default 
	}
	Book ( string name , int isbn , string code , float sale_price , float buying_price  ) {
    	set_name(name);
		set_isbn(isbn);
		set_code(code);
		set_sale_price(sale_price);
		set_buying_price(buying_price);	
	}
	Book ( Book &b1 ) {
		 this->name = b1.name ;
		 this->isbn = b1.isbn ;
		 this->code = b1.code ;
		 this->sale_price = b1.sale_price ;
		 this->buying_price = b1.buying_price ;
	}
	
	string get_name () {
		return name ;
	}
	int get_isbn () {
		return isbn  ;
	}
	string get_code () {
		return code  ;
	}
	float get_sale_price () {
		return sale_price ;
	}
	float get_buying_price () {
		return buying_price ;
	}
	
	void display () {
		cout << " Name: " << get_name() << endl ;
		cout << " ISBN: " << get_isbn() << endl ;
		cout << " Code: " << get_code() << endl ;
		cout << " Sale Price: " << get_sale_price() << endl ;
		cout << " Buying Price: " << get_buying_price() << endl ;
	}
		
};

int main () {

Book b , b1 ;
int temp ;
string temp2 ;
float temp3 ;

cout << " Enter Book Name: " ;
cin >> temp2 ;
b.set_name(temp2);

cout << " Enter ISBN Number: " ;
cin >> temp ;
b.set_isbn(temp);

cout << " Enter Book code: " ;
cin >> temp2 ;
b.set_code(temp2);

cout << " Enter saling price: " ;
cin >> temp3 ;
b.set_sale_price(temp3);

cout << " Enter buying price: " ;
cin >> temp3 ;
b.set_buying_price(temp3);

cout << " called copy constructor: " << endl ;
b1 = b ;

b.display();

 return 0 ;
}
