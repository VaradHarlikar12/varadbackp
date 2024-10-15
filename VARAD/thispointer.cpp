#include<iostream>
using namespace std;
class A{
    int a;
    public:
    //A & setdata(int a){that will return the refernce of object that is called.here the object is obj and it  
    //referenced to avoid copying and chaininhg directly.
    //A  setdata(int a){
    void setdata(int a){
        this->a = a;
    }
    void getdata(){
        cout<<"value of this pointer is:"<<a<<endl;
    }
};
int main(){
    A obj;
    obj.setdata(4);
    obj.getdata();
    return 0;
}