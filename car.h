#pragma once
#include <string>
using namespace std ;

class car
{
private :
	string maker ;
	int model ;
	string color ;


	// prototypes
public :	
	void setMaker (string value ) ;   // Setter 
	string getMaker ();				  // Getter 

	void setModel ( int value) ;	   //setter 
	int getModel ();				   // Getter

public:
	car(void);
	~car(void);
};

