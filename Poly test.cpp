#include <iostream>
using namespace std ;

class Shape {
	
	protected :
		
		
		int shape ;
		
	public :
		
	virtual void set_shape ( int s ) {
			shape = s ;
	}
	
};

class Ractangle : public Shape {
	
	void set_shape (int s ) {
		cout << " This is rectagle " << s << endl ;  
	} 
};

class Circle : public Shape {
	
	void set_shape (int s) {
		cout << " This is circle " << s << endl ;
	}
};

class Triangle : public Shape {
	
	void set_shape ( int s ) {
		cout << " Triangle Val: " << s << endl ; 
	}
};

int main () {

Ractangle R ;
Circle C ;
Triangle T ;
 

Shape *s1 = &R ;
Shape *s2 = &C ;
Shape *s3 = &T ;

s1->set_shape (56);
s2->set_shape (32);
s3->set_shape (34);


  return 0 ;
}
