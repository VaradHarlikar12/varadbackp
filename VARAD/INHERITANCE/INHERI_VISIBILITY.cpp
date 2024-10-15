#include<iostream>
using namespace std;
class employee{
      float  sal;
      int id ;
      public:
      int age;
      string name;
      public:
      employee(int ipid,float sal){
        id=ipid;
        salary=sal;
      }
      employee();
};
// DERIVED CLASS SYNTAX
//  CLASS {{derived_class_name}}:{{visibility mode}} {{base_class_name}}
//  {
//     class methods/members
//  }
class programmer : employee{
    public:
    programmer(int ipID){
        id=idID;
    }
    int languageCode = 9;
    void getdata{
        cout<<"id number"<<id<<endl;
    }
};
int main(){
    employee e1,e2;
    cout<<"salary for first employee"<<e1.salary<<endl;
    cout<<"salary for second employee"<<e2.salary<<endl;
    programmer skill(10);
    skill.languageCode;
    cout<<
    return 0;
}
//NOTES BY HARRY BHAU
/*
1.DEFAULT VISIBILTY MODE IS PRIVATE
2.PUBLIC VISIBILITY MODE:
  <<PUBLIC MEMBERSS OF BASE CLASS BECOME PUBLIC MEMBERS IN DERIVED CLASS
  <<PROTECTED MEMBERS OF BASE CLASS BECOME PROCTED MEMBERS OF DERIVED CLASS
  <<PRIVATE MEMBERS OF BASE CLASS CAN'T BE ACCESED BY DERIVED CLASS
3.PRIVATE VISIBILITY MODE:
  <<PUBLIC MEMBERS OF BASE CLASS BECOME PRIVATE MEMBERS OF DERIVED CLASS
  <<PROTECTED MEMBERS OF BASE CLASS BECOME PRIVATE MEMBERS OF DERIVED CLASS
  <<PRIVATE MEMBERS OF BASE CLASS CAN'T BE ACCESED BY DERIVED CLASS
4.PROTECTED VISIBILITY MODE:
  <<PUBLIC MEMBERS OF BASE CLASS BECOME PROTECTED MEMBERS OF DERIVED CLASS
  <<PRIVATE MEMBERS OF BASE CLASS CAN'T BE ACCESED BY DERIVED CLASS
  <<PROTECTED MEMBERS OF BASE CLASS BECOME PROTECTED MEMBERS OF DERIVED CLASS
*/