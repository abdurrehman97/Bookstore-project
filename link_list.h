#include <iostream>
#include "bookclass.h"

using namespace std ;

class Node {
	
	public: 
	
	Book book ;
	Node *adress ;
		
	Node () {
		
	adress = NULL ;
}
	} ;
	
class List {
	 
	Node *head ;
	Node *current ;
	 
    public: 
	 
	List () {
	
	this->head = NULL ;
	
	}
	 
	void add ( Book b ) {
			
	Node *temp = new Node ;				
	temp->book = b ;
	temp->adress = NULL ;	
			
	if ( head == NULL ) {
				
	head = temp ;
	current = temp ;
	temp = NULL ;
				
	}
			
	else {
				
	current->adress=temp;
	current = temp ;
				
	}
	
	}
	
	Node* get_head () {
		return head ;
	}

};
