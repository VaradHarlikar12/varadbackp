//HERE WE CAN'T ACCES data1 but we can acces it through an member function of base class.
//so we call getdata1 when ever we need to use it in derived function
#include<iostream>
using namespace std;
class base{
    int data1;//PRIVATE
    public:
    int data2;//PUBLIC
    void setdata();
    int getdata1();
    int getdata2();
};
void base :: setdata(void){
    data1=10;
    data2=20;
}
int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
    return data2;
}
class derived : public base{
//it i accces it private.  i can't directly access it through derived class objects
    int data3;
    public:
    void process();
    void display();
};
 void derived :: process(){
    setdata();
    data3=data2*getdata1();
 }
 void derived :: display(){
    cout<<"Value of data 1 is"<<getdata1<<endl;
    cout<<"Value of data 1 is"<<data2<<endl;
    cout<<"Value of data 1 is"<<data3<<endl;
 }
int main()
{
    derived der;
    der.process();
    der.display();
    //der.setdata();Here i can't access this function if i access base
    return 0;

}