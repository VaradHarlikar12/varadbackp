#include<iostream>
using namespace std;
//***********problem at 36 is solved using virtual function.
//it will help compiler as now compiler will check the type of obj the pointer is pointing to*********IMP
//POLYMORPHISM
//-ONE NAME MULTIPLE FORMS
//-EG. FUNCITON OVERLOADING,OPERATOR OVERLOADING
//-EG. VIRTUAL FUNCTION
/*TYPES OF POLYMORPHIS 
1) COMPILE TIME:-
    WHEN WE USE FUNCTION OVERLOADING,OPERATOR OVERLOADING
2) RUN TIME:-
    WHEN WE USE VIRTUAL FUNCTIONS
*/
class BASECLASS
{    
public:
int bvar;
    void display(){
    cout<<"value of variable at base class"<<bvar<<endl;
    }
};
class DERIVEDCLASS: public BASECLASS{
    public:
    int dvar;
    void show(){
    cout<<"value of variable at base class in derived class"<<bvar<<endl;
    cout<<"value of variable at derived class"<<dvar<<endl;
    }
};
int main(){
    BASECLASS *Bptr;
    BASECLASS obj_base;
    DERIVEDCLASS obj_derived;
    Bptr=&obj_derived;
    //late binding done as pointer is of base but obj it is pointing to is of derived class
    Bptr->bvar=28;
    Bptr->display();
    Bptr->bvar=28000 ;
    Bptr->display();
    //bptr->dvar=49; this will throw error as the pointer is of base class and can access base class members only 
    return 0;
}