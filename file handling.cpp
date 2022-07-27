#include <iostream>
#include <fstream>
using namespace std ;

int main () {

//    string v , v2 , v3 , v5 ;
//    ifstream myfile ;
//    myfile.open("e:/OOP/myfile.txt");
//    
//    while(myfile.eof() != true){
//    	
//    	myfile >> v ;
//		cout << v << endl;	
//	}
//	myfile.clear();
	
	streampos begin,end;
  ifstream myfile ("e:/OOP/myfile.txt", ios::binary);
  begin = myfile.tellg();
  cout << "begin is -> " << begin << endl;
  myfile.seekg (0, ios::end);
  end = myfile.tellg();
  cout << "end is -> " << begin << endl;
  myfile.close();
  cout << "size is: " << (end-begin) << " bytes.\n";
    
//    cout << v << endl ;
//    myfile >> v2 ;
//    cout << v2 << endl ;
//    myfile >> v3 ;
//	cout << v5 << endl ; 
//	myfile >> v5;  

//
//  string line;
//  ifstream myfile ("e:/OOP/myfile.txt");
//  if (myfile.is_open())
//  {
//    while ( getline (myfile,line) )
//    {
//      cout << line << '\n';
//    }
//    myfile.close();
//  }
//
//  else cout << "Unable to open file"; 
  
  
  
  
 return 0 ;
}

