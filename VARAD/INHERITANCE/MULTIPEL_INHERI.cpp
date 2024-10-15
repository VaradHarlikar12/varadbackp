#include<iostream>
using namespace std;
//SYNTAX FOR MULTIPLE INHERITANCE 
//CLASS DERIVED :VISIBILITY_MODE BASECLASSS_1,VISIBILITY_MODE BASECLASSS_2{
// BODY
// };
class Base1{
    protected:
    int base1;
    public:
    set_data1(int a){
         base1 = a;
    }
};
class Base2{
    protected:
    int base2;
    public:
    set_data2(int a){
         base2 = a;
    }
};
class Derived : public Base1, public Base2{
    public:
    void show(){
        cout<<"The value at base1 is :"<<base1<<endl;
       cout<<"The value at base2 is :"<<base2<<endl;
       int base3= base1+base2;
        cout<<"The value after summing up both isw :"<<base3<<endl;
    }
};
int main(){
    Derived harry;
    harry.set_data1();
    harry.set_data2();
    harry.show();
    return 0;
}