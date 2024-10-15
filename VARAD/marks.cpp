#include<iostream>
using namespace std;
class student{
    public:
    int roll_no;
    char name[50];
    public:
    void accept(){
        cout<<"ENTER YOUR ROLL NUMBER:"<<endl;
        cin>>roll_no;
        cout<<"ENTER YOUR NAME:"<<endl;
        cin>>name;
    }
    void display(){
        cout<<"STUDENTS ROLLL NUMBER IS:"<<roll_no<<endl;
        cout<<"STUDENTS NAME IS:"<<name<<endl;
    }
};
   class marks : public student{
    public:
    int m1,m2,m3;
    float percentage,total;
    public:
        marks(){
        cout<<"marks for physiscs"<<endl;
        cin<<m1;
        cout<<"marks for chemistry"<<endl;
        cin<<m2;
        cout<<"marks for maths"<<endl;
        cin<<m3;
        total=m1+m2+m3;
        percentage=(total)/300 * 100;
     }
     void put(){
        display();
        cout<<"TOTAL"<<total<<endl;
        cout<<"PERCENTAGE:"<<percentage<<endl;
     }
   }


int main(){
    marks m1;
    m1.accept();
    m1.put();
    return 0;
}