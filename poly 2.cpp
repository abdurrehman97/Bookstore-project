#include <iostream>
using namespace std ;

class Student {
	
	protected :
		
		string name ;
		int roll ;
		string section ;
		string dept ;
	
	public :
		
	  virtual void set_name ( string n ) {
	  	name = n ;	
	  }
	  virtual void set_roll ( int r ) {
	  	roll = r ;
	  } 
	  virtual void set_section ( string s ) {
	  	section = s ;
	  } 
	  virtual void set_dept ( string d ) {
	  	dept = d ;
	  }
};

class S2 : public Student {
	
	
	void set_name ( string n ) {
	cout << n ;
	} 
	void set_roll ( int r ) {
		cout << r ;
	} 
	void set_section ( string s ) {
		cout << s ;
	} 
	void set_dept ( string d ) {
		cout << d << endl ;
	} 
	
};

class S3 : public Student {
	
	void set_name ( string n ) {
	cout << n ;
	} 
	void set_roll ( int r ) {
	cout << r ;
	} 
	void set_section ( string s ) {
	cout << s ;
	} 
	void set_dept ( string d ) {
	cout << d << endl ;
	} 
	
};

int main () {

S2 x ;
S3 y ;
Student *s1 = &x ; 
Student *s2 = &y ;
string temp ;
int temp1 ;

cout << " Enter the name  " ;
cin >> temp ; 
s1->set_name(temp);

cout << " Enter the roll " ;
cin >> temp1 ; 
s1->set_roll(temp1);

cout << " Enter the sec  " ; 
cin >> temp ;
s1->set_section(temp);

cout << " Enter the dept  " ;
cin >> temp ; 
s1->set_dept(temp) ;

cout << " Enter the name  " ;
cin >> temp ; 
s2->set_name(temp);

cout << " Enter the rol;  " ; 
cin >> temp1 ;
s2->set_roll(temp1);

cout << " Enter the sec  " ;
cin >> temp ; 
s2->set_section(temp);

cout << " Enter the dept  " ;
cin >> temp ; 
s2->set_dept(temp) ;

  return 0 ;
}
