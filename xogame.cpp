#include <iostream>
#include <stdlib.h>

using namespace std ; 
char player ='X';
char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};

/*=======================================================================
						Game layout
===========================================================================
*/
		void draw () {
			system("cls");
			cout << "\n Tic Tac Toe Game Version 1.0 \n"  ;
			
			for (int i=0 ; i<3 ; i++ ){
				cout << endl <<endl ;
				for(int j=0 ; j<3 ; j++){
					cout<<"    "<< matrix[i][j] << "    " ;
				}
				cout <<endl ;
			}
		}
/*=======================================================================
							Play 
===========================================================================
*/
		void play(){
			char pos ;

			cout << " \n \n enter your position player ( \" " << player << " \" ) : " ;
			cin >> pos ;

			for (int i=0 ; i<3 ;i++){
				for (int j=0 ; j<3 ; j++){
					if(matrix [i][j] == pos){
						matrix[i][j] = player ;
					}		
				}   
			}

			if (player=='X')
				player='O';
			else 
				player = 'X';
		}

/*=======================================================================
							who won 
===========================================================================
*/
	char who_won (){
		int Xc=0 , Oc=0 , counter =0 ;	     //Counters 

		// rows check
		for (int i=0 ; i<3 ; i++ ){
			for(int j=0 ; j<3 ; j++){
				if( matrix[i][j] !='X' &&  matrix[i][j] !='O' ) counter++ ;
				if (matrix[i][j]  == 'X') Xc++ ;
				else if (matrix[i][j]  == 'O') Oc++ ;

				if(Xc==3 || Oc==3 )
					return Xc > Oc ? 'X':'O' ;
			}
			 Xc=0 , Oc=0 ; // important to zerofy the counters  
		}

		//columns Check
		for (int i=0 ; i<3 ; i++ ){
			for(int j=0 ; j<3 ; j++){

				if (matrix[j][i]  == 'X') Xc++ ;
				else if (matrix[j][i]  == 'O') Oc++ ;
				// rows check
				if(Xc==3 || Oc==3 )
					return Xc > Oc ? 'X':'O' ;
			}
			 Xc=0 , Oc=0 ;
		}

		//Diagonal Check

		if(matrix[0][0]=='X' && matrix[1][1]== 'X' && matrix[2][2]=='X') return 'x';
		if(matrix[0][0]=='O' && matrix[1][1]== 'O' && matrix[2][2]=='O') return 'O';

		if(matrix[0][2]=='X' && matrix[1][1]== 'X' && matrix[2][0]=='X') return 'x';
		if(matrix[0][2]=='O' && matrix[1][1]== 'O' && matrix[2][0]=='O') return 'O';

		if ( counter == 0 ) return 'Z';
	
		return '.'; // the dot means the game has't ended
	}
/*=======================================================================
							Main Function 
===========================================================================*/
int main (){
	while ( who_won()=='.')
	{
		draw(); //layout of the game 
		play(); // input position 
	}

	
	if (who_won()== 'Z')
		cout << " \n No One has Won \n" ;
	else 
		cout <<" \n The Winner is : " <<who_won() << " \n\n" ;
	system("pause");
	return 0 ;
}