#include<iostream>
using namespace std;
class simp_cal{
    public:
    int a,b,c=0;
    public:
    void accept(){
        cout<<"Enter value for value 1:"<<endl;
        cin>>a;
        cout<<"Enter value for value 2:"<<endl;
        cin>>b;
    }
    void display(){
    cout<<"VALUES AFTER CALCULATING :"<<c<<endl;
    }
    void comput(){
    switch(c){
    case 1:
    c=a+b;
    case 2:
    c=a-b;
    case 3:
    c=a/b;
    case 4:
    c=a%b;
    case 5:
    c=a*b;
    }
  }
};

int main(){
    simp_cal c1;
    c1.accept();
    c1.display();
    c1.comput();
    cout<<"PRESS 1 TO ADD:"<<c<endl;
    cout<<"PRESS 2 TO SUBSTRACT:"<<c<<endl;
    cout<<"PRESS 3 TO DIVIDE:"<<c<<endl;
    cout<<"PRESS 4 TO REMAINDER :"<<c<<endl;
    cout<<"PRESS 5 TO MULTIPLICATION:"<<c<<endl;
    return 0;
}