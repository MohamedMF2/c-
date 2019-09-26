#include <iostream>
#include "car.h" ;
using namespace std ;

int main () {
	car c1;
	c1.setMaker(" Nissan Skyline ") ;
	c1.setModel ( 1992) ;

	cout << " the car is made by " << c1.getMaker() <<endl ;
	cout << " at  " << c1.getModel() <<endl ;
}