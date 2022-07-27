#include <iostream>
#include <stdio.h>
#include <iomanip>
#include "DataBase.h"

using namespace std ;

class Interface {
	
private:
	
	DataBase db;
	
public:
		
	void display_Main_Menu () {
		
		cout << endl ;
		cout << " \t\t\t\t\t /////////////////////////////////////////// " << endl ;
		cout << " \t\t\t\t\t //// Welcome To Online Book Store /////// " << endl ;
		cout << " \t\t\t\t\t /////////////////////////////////////////// " << endl ;	
		cout << endl << endl <<endl ;
		cout << "\t\t <|| Main Menu ||> " << endl ;
		cout << "\t\t__________________________________"<<endl;
		cout << endl ;
		cout << "\t\t 1. Search Book " << endl ;
		cout << "\t\t 2. View All Books To See The Code " << endl ;
		cout << "\t\t 3. View Your Stock " << endl ;
		cout << "\t\t 4. Add Any Book " << endl ;
		cout << "\t\t 5. Exit !! " << endl ;

	}
	
	void Add_Book_Data () {
		
		int choice ;
		Book book;
		List *l = new List();
		while(1){
			cout << endl ;
			cout << " DO YOU WANT TO ADD FURTHER STOCK ( 1 -> Continue 0 -> stop  )" ;
			cin >> choice ;
			if (choice == 0){
				l = NULL;
				delete l;
				break;
			}
			book = store_user_data();
			l->add(book);
			db.write(l);
			l = NULL;
			delete l;
		}
 }
	
	Book store_user_data(){

        Book b ;
        string t1 ; 
        float t2 ;
        int t3 ;
        
        cout << endl ;
        cout << " Enter ISBN: " ;
		cin >> t1 ;
		b.set_isbn(t1) ; 
		
		cout << " Enter Course Code: " ;
		cin >> t1 ; 
		b.set_code(t1);
		 
		cin.clear();
        cin.sync();	
		cout << " Enter Course Title: " ;
		cin >> t1 ;
		t1 = "<" + t1 + ">" ;
		b.set_name(t1);
				 
		cout << " Enter Course Sale Price: " ;
		cin >> t2 ;
		b.set_sale_price(t2);
		
		cout << " Enter Course Buying Price: " ;
		cin >> t2 ;
		b.set_buying_price(t2) ;
				
		cout << " Enter Course Stock: " ;
		cin >> t3 ;
		b.set_quantity(t3);
		
		return b;
		
	}
	
	template<typename T> void printElement(T t, const int& width){
		
		cout << left << setw(width) << setfill(' ') << t;
	}
	void display_SubMenu () {
		
		Book book;
		char choice ;
		string code , find ;
		ifstream myfile;
		cout << endl ;
		cout << "\t\t Choose Any Option: ";
		cin >> choice ;
		
		do {
			
			switch (choice) {
			
			case '1' :
				system("CLS") ;
				cout << endl ;
				cout << " Enter Your Course Code: " ;
				cin >> code ;
				book = db.search(code) ;
				cout << endl ;
				if ( book.get_name() == "" ) {
					cout << " Your code is not valid or not in our record  " << endl ;	 
					break ;
				}
					
				printElement("ISBN", 26) ;
				printElement("Cource Code", 15) ;
				printElement("Cource Title", 38) ;
				printElement("SalePrice", 16) ;
				cout << endl ;
			    cout << "________________________________________________________________________________________" << endl ;
				cout << endl ;
				
				printElement(book.get_isbn(), 26);
				printElement(book.get_code(), 15);
				printElement(book.get_name(), 38);
				printElement(book.get_sale_price(), 16);
				cout << endl ;
				
				break ;
							
			case '2' :
				
				system("CLS") ;
				cout << endl ;
				cout << " <|| All Books Are Here ||> " << endl ;
				
				myfile.open("resources/books_stock.txt");
				cout << endl ;
				printElement("Cource Code", 15) ;
				printElement("Cource Title", 38) ;
				cout << endl ;
				cout <<"__________________________________________" << endl ;
				cout << endl ;
				
				while ( !myfile.eof() ) {
							
					book = db.get_row(myfile);	
					printElement(book.get_code(), 15);
				    printElement(book.get_name(), 38);
					cout << endl ;	
				}			
				myfile.close();
				 
				break ;
				
			case '3' :
				
				system("CLS") ;
				myfile.open("resources/books_stock.txt");
				cout << endl ;
				
				printElement("ISBN", 26)   ;
				printElement("Cource Code", 15) ;
				printElement("Cource Title", 38) ;
				printElement("SalePrice", 16) ;
				printElement("Buying Price", 16) ;
				printElement("Quantity", 8) ;
				cout << endl << endl ;
				
				while(!myfile.eof()){			
				
				    book = db.get_row(myfile);	
				    printElement(book.get_isbn(), 26);
				    printElement(book.get_code(), 15);
				    printElement(book.get_name(), 38);
				    printElement(book.get_sale_price(), 16);
				    printElement(book.get_buying_price(), 16);
				    printElement(book.get_quantity(), 8);
				    cout << endl;
				    
				}			
				myfile.close();
				break;
				
			case '4' :	
				system("CLS") ;
				Add_Book_Data();
				break;
			
			case '5' :
				system("CLS") ;
				cout << endl;
				cout << " Your Program Has Been Closed :) " << endl ;
				cout << endl;
				break ;
			}
			
		}
		while ( choice == 5 ) ;
		
		Interface i ;
		cout << endl;
		cout << " Back To The Main Menu -> " ;
		cin >> choice ;
		i.display_Main_Menu();
		i.display_SubMenu();
		}
	~Interface(){
//		delete 
	}
}; 

int main () {

int Password ;
string name ;
int choice ;

cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl ;
cout << "\t\t\t\t\t Enter your name... " ;
cin >> name ;
cout << endl ;
cout << "\t\t\t\t\t Enter your password... " ;
cin >> Password ;	
system("CLS") ;

if ( Password == 123 && name == "LGU" ) {
   
Interface i ;
i.display_Main_Menu();
i.display_SubMenu();

}	 
else {
	
	cout << endl ;
	cout << "\t\t\t\t\t Unable to open the Program " ;
	cout << endl << endl << endl << endl ;
	cout << " Press 1 To -> Please write the correct Name OR Password... " ;
	cin >> choice ;
	system("CLS") ; 
	while ( choice == 1 ) {
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl ;
    cout << "\t\t\t\t\t Enter your name... " ;
    cin >> name ;
    cout << endl ;
    cout << "\t\t\t\t\t Enter your password... " ;
    cin >> Password ;	
    system("CLS") ;

if ( Password == 123 && name == "LGU" ) {
   
Interface i ;
i.display_Main_Menu();
i.display_SubMenu();

}
}
}
 return 0 ;
}
