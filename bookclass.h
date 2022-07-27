#include <iostream>
using namespace std ;

class Book {
	
private:

	string name ;
	string isbn ;
	string code ;
	float sale_price ;
	float buying_price ;
	int quantity ;
	
public: 

	void set_name ( string n ) {
		name = n ;
	}
	void set_isbn ( string i ) {
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
	void set_quantity ( int q ) {
		quantity = q ;
	} 
	
	Book () {
    	// Default 
	}
	Book ( string name , string isbn , string code , float sale_price , float buying_price , int quantity ) {
    	set_name(name);
		set_isbn(isbn);
		set_code(code);
		set_sale_price(sale_price);
		set_buying_price(buying_price);
		set_quantity (quantity);	
	}
	Book ( Book &b1 ) {
		 this->name = b1.name ;
		 this->isbn = b1.isbn ;
		 this->code = b1.code ;
		 this->sale_price = b1.sale_price ;
		 this->buying_price = b1.buying_price ;
		 this->quantity = b1.quantity ;
	}
	string get_name () {
		return name ;
	}
	string get_isbn () {
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
	int get_quantity () {
		return quantity ;
	}
	void display () {
		cout << " Name: " << get_name() << endl ;
		cout << " ISBN: " << get_isbn() << endl ;
		cout << " Code: " << get_code() << endl ;
		cout << " Sale Price: " << get_sale_price() << endl ;
		cout << " Buying Price: " << get_buying_price() << endl ;
		cout << " Quantity: " << get_quantity () << endl ;
	}		
};
