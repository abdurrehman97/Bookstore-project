#include <iostream>
#include <time.h>

using namespace std;

	class Bank //abstract base class
	{
	public:
	    double startBalance;
	    string COKAccountHolders;
	    double limit;
	};
	
	// inherite the bank class into class " ATMAccountHolders "
	
	class ATMAccountHolders:public Bank
	    {
	    string accountHolders;
	    string accountHoldersAddress, branch;
	    int accountNumber;
	    double startBalance;
	    double accountBalance;
	    double accountInterest;
	    double amount;
	    int count;
	 
	    public:
	    	
	    //void Display_accountBalance();
	    void deposit();
	    void withdraw();
        void details();
	    void payBills();
	    void accountExit();
	    void interest();
	     
	    ATMAccountHolders() {

	    accountNumber = 5678;
	    accountHolders = "Lahore Garrison University";
	    accountHoldersAddress = "DHA Phase 6";
	    startBalance = 60000.00;
	    accountBalance = 20000.00;
	    branch  = "Pkr";
	    amount = 20000; 
		            
	    	}
	    }; 
	    
	    // :: this operator means that we are using function 'interest' of class ATMAccountHolders
	    
	    void ATMAccountHolders::interest()
	     {
	     	
	     	// implement interest function 
	     	
	    system("cls");
	       
	       cout<<"\nATM ACCOUNT INTEREST PAYMENT\n";
	       cout<<"\tThe Interest is calculate over the last SIX months on the average account balance\n";
	       cout<<"\n\t\tInterest Rate payable is 10% per annum."<<endl;
	       cout<<"\t\tView the accumulated interest? Press 1 for Yes OR 0 for NO.\n\n";
	        
	       cout<<" ATM ACCOUNT INTEREST PAYMENT \n";
	         
	        cout<<"\n\nAccount Holder Name :"<<accountHolders<<"\n\n";
	        cout<<"\tAccount Holder address:"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\tStarting account balance :Rs"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :Rs"<<accountBalance<<"\n\n";
	        
			accountInterest=accountBalance+(accountBalance*1.050);
	        
			cout<<"\tPresent available balance + interest for 6 months :Rs"<<accountInterest<<"\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	        }
	
	    void ATMAccountHolders::deposit()
	    {
	         system("cls");
	        cout<<"\n ATM ACCOUNT DEPOSIT SYSTEM \n";
	         
	        cout<<"\n\nAccount Holders Name :"<<accountHolders<<"\n\n";
	        cout<<"\tAccount Holder address:"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\tStarting account balance :Rs"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :Rs"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Deposited Rs";
	             
	            double amount;
	            cin>>amount;
	        accountBalance=startBalance+amount ;
	        cout<<"\n\tYour new available Balanced Amount is Rs"<<accountBalance<<endl ;
	        cout<<"\n\t\t\tThank You!\n\n"<<endl;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	    }
	    
	    void ATMAccountHolders::withdraw()//Withdrawal Transactions
	    {
	         system("cls");
	        cout<<"\n ATM ACCOUNT WTHDRAWAL \n";
	         
	        cout<<"\n\n Account Holder Name :"<<accountHolders<<"\n\n";
	        cout<<"\tAccount Holders' address :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"\tStarting account balance :Rs"<<startBalance<<"\n\n";
	        cout<<"\tPresent available balance :Rs"<<accountBalance<<"\n\n";
	        cout<<"\tEnter the Amount to be Withdrawn Rs";
	             
	            double amount;
	            cin>>amount;
	             
	            if(amount>accountBalance||amount>9000)//Limit set at rs9000 maximum after paying bills
	            {
	        system("cls");
	        cout<<"\n ATM ACCOUNT WITHDRAWAL \n";
	        cout<<"\n\Account Holder Name:"<<accountHolders<<"\n\n";
	        cout<<"\tAccount Holder address:"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";        
	        cout<<"\n\tInsufficient Available Balance in your account.\n\n"<<endl;
	        cout<<"\t\t\tSorry !!\n"<<endl;
	        system("PAUSE");
	            }
            else
	            {
	                double b;
	                accountBalance=startBalance-amount ;
	    	system("cls");
	        cout<<" ATM ACCOUNT WTHDRAWAL " << endl ;
	        cout<<"\n\n Account Holders Name :"<<accountHolders<< endl << endl ;
            cout<<"\tAccount Holder address :"<<accountHoldersAddress<< endl ;
	        cout<<"\tThe Branch location is :"<<branch<< endl ;
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"Your new available Balanced Amount is Rs"<<accountBalance<<endl ;
	        cout<<"Press any key to Return to the Main Menu " <<endl ;
	                       
	           }
	     
	    }
	    void ATMAccountHolders::payBills()
	    {
	        system("cls");
	 
	        cout<<"\n ATM BILLS PAYMENT SYSTEM " << endl ;  
	        cout<<"\n\nAccount Holder Name :"<<accountHolders<< endl ;
	        cout<<"\tAccount Holder address  :"<<accountHoldersAddress<< endl ;
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"Pay Electric Company electricity bill of Rs2000.00 now?" << endl ;
	        cout<<"\t\tPress 1 for Yes OR Press 0 for No" << endl ;
	         
	        int r;
	         
	        cin>>r;
	        if(r=1)
	        {accountBalance=startBalance-2000;
	        system("cls");
	        cout<<"\n ATM BILLS PAYMENT SYSTEM \n";
	        cout<<"\n\tYour electricity bill of Rs2000.00 has been paid.\n\n";
	        cout<<"\tYour account new Available Balanced Amount is Rs"<<accountBalance<<endl ;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	       }
	       
	       if(r=0)
	       {
	       cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
	        cout<<"\n\n\tExiting Bill Payment System. Thank you!.\n\n";    
	        cout<<"====================++THANK YOU++============================\n\n";     
	       }
	        system("PAUSE");   
	    };
	void ATMAccountHolders::details()
	    {
	        system("cls");
	           
	 
	        cout<<"\n ATM ACCOUNT DETAILS \n";
	        cout<<"\n\nAccount Holder Name :"<<accountHolders<<"\n\n";
	        cout<<"\tAccount Holder address :"<<accountHoldersAddress<<"\n\n";
	        cout<<"\tThe Branch location is :"<<branch<<"\n\n";
	        cout<<"\tAccount number :"<<accountNumber<<"\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");   
	    }
	 
     void ATMAccountHolders::accountExit()
	    {
	        system("cls");
	        cout<<"\n ATM ACCOUNT EXIT \n";
	        cout<<"\n\n\t\t BROUGHT TO YOU BY Group 2 \n\n";
	        system("PAUSE");
	        exit(1);   
	    }
	     
	 
	class Limits:public Bank
	      {
	      public:
	             void SetLimit(double NewLimit)
	             {}
	       
	             double Getlimit()
	             {}
	       
	      };         
	
	    int main()
	    {
	    int e;
	    ATMAccountHolders p;
	     
	    system ("Color 2f");
	        cout<<"\n WELCOME TO LGU ATM \n";
        cout<<"\t\t\t--------------------\n"<<endl;
	        //Prompt to show today's date
	       cout << "\t\tCurrent date : ";
	       //Show date and time function
	         time_t now;
	         time(&now);
	 
	        printf("%s\n", ctime(&now));;
	      //Give space for the function of date and time
	        cout<<"\t\t\t--------------------\n"<<endl;
	        
	        cout <<	"\t\t1\t2\t3\n"<<endl;
	        cout <<	"\t\t4\t5\t6\n"<<endl;
	        cout <<	"\t\t7\t8\t9\n"<<endl;
	        cout <<	"\t\t\t0\t\t\n"<<endl;     
	         
	        cout<<"\tPress 1 and Then Press Enter to Access Your Account Via Pin Number\n\n";
	        cout<<"\t\t\t\t\t or \n\n";
	        cout<<"\tPress 0 and press Enter to get Help.\n\n";
	         
	      int access;
	      cin>>access;
	      switch(access)
	      {
	      case 1://pin to access account
	      system("cls");int i, pin;
	       
	      cout<<"\n ATM ACCOUNT ACCESS \n";
	      cout<<"\n\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]\n\n"<<endl;
	                     
	      cin>>pin;
	       
	      system("cls");
	       
	      if(pin==1234)
	       
	      {
	      system("cls"); 
	       
	      do
	        {
	      system("cls");  
	     
	cout << endl << "\n ATM Main Menu Screen \n" << endl << endl;
	cout << "\t\tEnter [1] To  Deposit Cash" << endl;
	cout << "\t\tEnter [2] To Withdraw Cash" << endl;
	cout << "\t\tEnter [3] To Balance Inquiry" << endl;
	cout << "\t\tEnter [4] To Pay Bills" << endl;
	cout << "\t\tEnter [5] to Pay Account Interest" << endl;
	cout << "\t\tEnter [0] to Exit ATM" << endl << endl;
	cout << "\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
  
	        cin>>e;
	        switch(e)
	        {
	            case 1:
	                p.deposit();
	                break;
	            case 2:
	                p.withdraw();
	                break;
	            case 3:
	                p.details();
	                break;
	            case 4:
	                p.payBills();
	                break;
	            case 5:
	                p.interest();
	                break;
	            case 0:
	                p.accountExit();
	                break;
	        default:cout<<"Please Enter the Correct Number Choice"<<endl;
	        }
	    }while(e!=0);
	 
	      break;                                    
	      }                
	      else
	      {
	      system("cls");
	     
	cout<<"\n THANK YOU \n";
	cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
	      exit (1);
	      }
	    case 0://pin to access account
	    system("cls");
	      cout<<"\n ATM ACCOUNT STATUS \n";
	                    cout<<"\tYou must have the correct pin number to access this acount. See your\n\n";
	                    cout<<"\t  bank representative for assistance during bank opening hours\n\n";
	                    cout<<"\t\tThanks for, your choice today!!\n\n";
	      exit(1);      
	      break;   
	    }
	return 0;
	};


