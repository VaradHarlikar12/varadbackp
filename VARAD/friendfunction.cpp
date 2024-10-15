#include<iostream>
using namespace std;
class complex{
    int a,b;//private so can't be accesed outside calss
    public:
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"your nnumber is :"<<a<<" + "<<b<<"i"<<endl;
    }
};
friend complex sumcomplex(complex o1,complex o2);
//telling compiler that complex is complex is friend of subcomplex
//now subcomplex can access members of complex even if they are private
void  complex sumcomplex(complex o1,compllex o2){
    complex 03;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3; 
}
int main(){
    complex c1,c2;
    c1.setNumber (1,4);
    c2.setNumber(5,8);
    c1.printnumber();
    c2.printnumber();
    return 0;
}
/*properties or rules when we use friend
 1.not in scope     
2.since it is not in scopoe of the class it can't access private data members
  so c1.sumcomplex isa invalid 
3.can be invoked without the help fo any object
4.usually contains objects as arguments
5.can be declared inside public or private section of class
6. it can't acces the meember diretly it needs object_name.member_name 

*/