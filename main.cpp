#include <iostream>
#include "car.h" ;
#include "rectanglar.h" ;

using namespace std ;

int main () {
	car c1;
	c1.setMaker(" Nissan Skyline ") ;
	c1.setModel ( 1992) ;
	/*
	cout << " the car is made by " << c1.getMaker() <<endl ;
	cout << " at  " << c1.getModel() <<endl ;
	*/
	 rectanglar rec ; 
	 rec.setLength(10.5);
	 rec.setWidth(5.5);

	 cout << " the rectanglar length is = " << rec.getLength() <<endl ;
	cout << " the rectanglar Width is = " << rec.getWidth() <<endl ;
	cout << " the area = " << rec.getLength() *   rec.getWidth() << endl ;

}