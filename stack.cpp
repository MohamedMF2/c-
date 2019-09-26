#include <iostream>

using namespace std;


struct stack {
    int top=-1 ;
    int arr[5];
    
    void push (int val) {
        if(top==4)return;
        
        top++;
        arr[top]=val ;
    }
    
    void pop(){
      if (is_empty())return  ;
        top-- ;
    }
    
    int top_value (){
        if(top==-1) return -1 ;
      return arr[top];  
    }
    
    bool is_empty(){
        
        if (top==-1) return true ;
        else return false ;
    }
        
    
};
int main()
{
    cout<<"this the stack \n";
    stack stacking ;
    stacking.push(3);
    stacking.push(5);
    stacking.push(7);
    stacking.push(9);
    
    while ( !stacking.is_empty() ){
        cout << stacking.top_value() <<endl ;
        stacking.pop();
    }
    

    return 0;
}
