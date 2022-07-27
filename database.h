#include <iostream>
#include <fstream>
#include "link_list.h"

using namespace std ;

class DataBase {
	
private :
 	
	fstream myfile;
	Book b ;
	
public:
	
	Book search ( string find ) {
		
		string code , title ;
		ifstream myfile ;
		
		myfile.open("resources/books_stock.txt") ;
			while (!myfile.eof()) {
				
			b = get_row(myfile);
			
			if ( b.get_code() == find ) {
				return b ;	
			}
		}
		b.set_name("");
		return b ;
	}
	Book get_row ( ifstream &myfile ) {
		
        string temp ;
        float temp1 ;
        int temp3 ;
	    myfile >> temp ;
	    b.set_isbn(temp);
	    myfile >> temp ;
	    b.set_code(temp);
	    char ch;
	    myfile.get(ch);
	    myfile.get(ch);
	    getline(myfile, temp, '>');
	    b.set_name(temp);
	    myfile >> temp1 ;
	    b.set_sale_price(temp1);
	    myfile >> temp1 ;
	    b.set_buying_price(temp1);
	    myfile >> temp3;
	    b.set_quantity(temp3);
	    return b ;
	    
	}
	
	void write ( List *l ) {

	Node *temp = new Node ;
	temp = l->get_head();
	
	while(temp!=NULL) {
    write (temp->book) ;
		
   // cout<< temp->book << endl;
    temp=temp->adress;	
			
	}
			
	}
	void write ( Book b ) {
	 	
		myfile.open("resources/books_stock.txt" , ios::app ) ;
		myfile << endl << b.get_isbn() << " " << b.get_code() << " " << b.get_name() << " " << b.get_sale_price() << " " << b.get_buying_price() << " " << b.get_quantity() ; 
		myfile.close();
		
	}
}; 
