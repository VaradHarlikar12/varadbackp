//area of circle using class outside function
#include<iostream>
using namespace std;
class circle{
    public:
    float r,a;
    public:
    void accept();
    void display();
    void compute();
};
 void circle::accept()
{
    cout<<"enter circle radius"<<endl;
    cin>>r;
}
void circle::compute()
{
    a=3.14*r*r; 
}
void circle::display()
{
    cout<<"given radius"<<r<<endl;
    cout<<"AREA oF CIRCLE:"<<a<<endl;
}
int main(){
    circle c1;
    c1.accept();
    c1.compute();
    c1.display();
    cout<<"suiiiii";
    cout<<"suiiiii";
    cout<<"suiiiii";
    return 0;
}