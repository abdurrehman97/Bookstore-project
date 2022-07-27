#include <iostream>
using namespace std ;

class A {
	
	public :
	
    virtual void father ( string f) {
	 		
	} 
};

class B {
	
	public :
		
	virtual void Mother (string m) {
	}
};

class C : public A , public B {
	
	public :
		
		 void Mother (string m) {
			cout << m ; 
		}
		void father (string f) {
			cout << f ; 
		}
}; 

int main () {

C c ;

A *a = &c ;
B *b = &c ;

a->father(" Father");
b->Mother(" Mother ");

  return 0 ;
}

