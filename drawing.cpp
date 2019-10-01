#include <iostream>


using namespace std ; 

/*=======================================================================
							Main Function  
===========================================================================*/
/*  christmas tree */
//---------------------------------------------------------------------------------------
int main (){
	int rows ;
	cout << " enter number of rows : " ;
	cin >> rows ; 
	for (int i=1 ; i<=rows ; i++){
		for (int j=0 ; j<rows-i ;j++) cout << " " ;
		for (int j =0 ; j<i*2-1; j++) cout <<"*" ; //stars
		cout <<endl ;
	}
	for (int i=rows/2 +1 ; i<=rows ; i++){
		for (int j=0 ; j<rows-i ;j++) cout << " " ;
		for (int j =0 ; j<i*2-1; j++) cout <<"*" ; //stars
		cout <<endl ;
	}
	for (int i =0 ;i<rows/3;i++) cout << "  " ;
	 cout << " | | \n\n\n" ;
	 

	return 0 ;
}

//----------------------------------------------------------------------------------------
/*Inverted Pyramid
-------------------------------------------------------------------------------------------
int main (){
	int rows ,f =1;
		cout << " enter the number of rows " << endl ;
		cin >> rows ; 
	for (int i = 1 ; i<= rows ; i++){
		for (int j =0 ; j<i+1 ;j++ ){ cout << " " ;} //space }
		
		if (i>1){
			f+=2 ;
		}

		for (int j=0 ;j <rows*2- f;   j++)
			
			{cout << "*" ; //stars 
		}
		
		cout<<endl;

	}
	return 0 ;
}
//----------------------------------------------------------------------------------------------------- */
/*  pyramid
//---------------------------------------------------------------------------------------
int main (){
	int rows ;
	cout << " enter number of rows : " ;
	cin >> rows ; 
	for (int i=1 ; i<=rows ; i++){
		for (int j=0 ; j<rows-i ;j++) cout << " " ;
		for (int j =0 ; j<i*2-1; j++) cout <<"*" ; //stars
		cout <<endl ;
	}
	return 0 ;
}*/