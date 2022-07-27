#include <iostream>
using namespace std ;

class scoreboard{
	
		
		public:
			virtual void get_score()
			{
				
				
			}
};

class Player1:public scoreboard
{
	public:
		void get_score ()
		{
			cout<<"Player 1 Score :  55 "<<endl;
		}
		
};

class Player2: public scoreboard
{
	public:
		int get_score()
		{
			cout<<"Player 2 Score : 56"<<endl;
		}
};
int main () 
{
	Player1 P1;
	Player2 P2;
	scoreboard *s1=&P1;
	scoreboard *s2=&P2;
	s1-> get_score();
	s2->get_score();
	
  return 0 ;
}

