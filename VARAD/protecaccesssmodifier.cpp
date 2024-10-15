//DIFFERENCE BETWEEN PRIVATE AND PROTECTED IS 
//THAT WE ARE ALLOWED TO INHERITE IN PROTECTED BUT IT IS LIKE PRIVATE AND IS NOT THAT 
//EASY TO ACCES THAT IT CAN BE CALLED AS PUBLIC
#include<iostream>
using namespace std;
class base {
    protected:
    int a;
    public:
    int b;
};
classs derived : public base{
     
}
int main(){
    
    return 0;
}