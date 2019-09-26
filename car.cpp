#include "car.h"


car::car(void)
{
}


car::~car(void)
{
}

void car::setMaker (string value ){
	maker = value ; 
}

 string car::getMaker (){
	 return maker ;
 }

 void car::setModel (int value ){
	model = value ; 
}

  int car::getModel (){
	 return model ;
 }