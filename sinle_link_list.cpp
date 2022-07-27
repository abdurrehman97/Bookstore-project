#include <iostream>
using namespace std ;

class Node {
	
	private :
		
		int data ;
		Node *next ;
		
	public :
		
	Node () {
		data  =  0;
		next = NULL ;
	}
 		
    void set_data ( int d ) {
		 data = d ;
	}
	void set_address ( Node *n ) {
		next = n ;
	}
	int get_data () {
		return data ;
	}
	Node* get_address () {
		return next ;
	}
};

class Link {
	
	public :
		
		Node *head ;
		Node *current ;
		
		Link () {
			
			head = NULL ;
			current = NULL ;
		}
		
		void add ( int v ) {
			
		Node *temp = new Node ;
		temp->set_data(v);	
		
		
		if ( head == NULL ) {
			
		temp->set_address(head) ;	
		head = temp ;
		current = temp ;
		cout << " IF! "; 
		   head->set_address(current);
		}
		
		else {
			
		temp->set_address(current) ;
		current = temp ;	
		cout << " ELSE! "; 
		
		}
						
		}
		
		void display () {
			
			while( head ){
				cout << head->get_data() << endl;
				head = head->get_address();	
			}
		}
};

int main () {

	Link *list = new Link ;
	list->add(23);
	list->add(30);
	list->add(5);
	list->add(10);
	list->add(99);
	list->display();
	list = NULL;
	delete list;
	
  return 0 ;
}
