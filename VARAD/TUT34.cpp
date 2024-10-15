
#include<iostream>
using namespace std;
class Number{
    int a;  
    public:
        Number(){}
        Number(int num){
            a=num;
        }
        void display(){
            cout<<"the number for this is:"<<a<<endl;
        }
        Number(Number &obj){
            cout<<"copy construtor  called"<<endl;  
            a=obj.a;
        }
};
int main(){
    Number x,y,z(43);
    x.display();    
    y.display();
    z.display();
    Number z1(z);//this will invoke copy constructor
    Number z3=z;//this will invoke copy constructor
    z2=z;//thsi won't invoke constructor
    return 0;
}