//if address '&' not given then copy of parametes will be created and no changes will be made 
//in actual values.
//friend function examples

//easyyyyyyyyy example
/*
#include<iostream>
using namespace std;
class y;
class x{
 int data;  
 public:   
    void SETvalue(int value)     {
        data=value;
    }
     friend void add(x,y);
};
class y{
 int num;  
 public:   
    void SETvalue(int value)     {
        num=value;
    }
    friend void add(x,y);
};
 
  void add(x o1,y o2){
    cout<<"Summing updata of Xnad Y objects gives us"<<o1.data + o2.data<<endl;
  }
int main(){
    x a1;
    a1.SETvalue(3);

    y b1;
    b1.SETvalue(5);
    add(a1,b1);
    return 0;
}
 */
//harder question
#include<iostream>
using namespace std;

class c2 ;
class c1{
    int val1;
    friend void exchange(c1 &x,c2 &y);
    public:
    void indata(int a){
        val1=a;
    }
    void display(void){
        cout<<val1<<endl;
    }
};
class c2{
    int val2;
    friend void exchange(c1 &x,c2 &y);
    public:
    void indata(int a){
        val2=a;
    }
    void display(void){
        cout<<val2<<endl;
    } 
};
void exchange(c1 &x,c2 &y){
    int temp= x.val1;
    x.val1 = y.val2; 
    y.val2 = temp;
}
int main(){
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1,oc2);
    cout<<"THE VALUE OF C1 AFTER EXCHANGING BECOMES:";
    oc1.display()<<endl;
    cout<<"THE VALUE OF C2 AFTER EXCHANGING BECOMES:";
    oc2.display()<<endl;
    return 0;
}  










































































































