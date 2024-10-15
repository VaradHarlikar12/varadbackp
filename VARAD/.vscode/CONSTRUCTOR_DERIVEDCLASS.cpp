    #include<iostream>
    using namespace std;
    /*
    CASE 1:
    class B: public A{
    //body
    }
    ORDER OF EXECUTION OF CONSTRUCTOR --> FIRST A(),THEN B() as A is base class
    CASE 2 :
    class A : public B, public C{
    //body
    }
    ORDER OF EXECUTION OF CONSTRUCTOR --> FIRST B(),THEN C()THEN A()
    
    CASE 3:
    class A : public B,  virtual public C{
    //body
    }
    ORDER OF EXECUTION OF CONSTRUCTOR --> FIRST C(),THEN B()THEN A()
    */
    class base1{
        int data1;
    public:
        base1(int a){
            data1=a;
         cout<<"base1 constructor called"<<endl;

        }
        void printdata(void){
            cout<<"THE VALUE OF DATA:"<<data1<<endl;
        }
    };
    class base2{
        int data2;
    public:
        base2(int a){
            data2=a;
            cout<<"base2 constructor called"<<endl;
        }
        void printdata(void){
            cout<<"THE VALUE OF DATA:"<<data2<<endl;
        }
    };
    class derived:public base1,public base2{
        int derived1,derived2;
    public:
        derived(int a,int b,int c,int d ):base1(a),base2(b){
            derived1=c;
            derived2=d;
            cout<<"derived class constructor called"<<endl;
        }   
        void printdata(void){
            cout<<"THE VALUE OF DERIVED1:"<<derived1<<endl;
            cout<<"THE VALUE OF DERIVED2:"<<derived2<<endl;
        }
    };
    int main(){
        derived VARAD(10,20,30,40) ;
        VARAD.printdata();
        return 0;
    }