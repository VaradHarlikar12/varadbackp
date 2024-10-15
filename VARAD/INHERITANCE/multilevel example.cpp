// #include<iostream>
// using namespace std;
// class  clg{
//     int id;
//     public:
//     char location,clg_name;
//     public:
//     void getid(int iD){
//         id=iD;
//         }
//     public:
//     void accept(){
//         cout<<"ENTER NAME OF COLLEGE;"<<endl;
//         cin>>clg_name;
//         cout<<"ENTER LOCATION OF COLLEGE"<<endl;
//         cin>>location;
//         cout<<"ENTER COLLEGE ID:"<<endl;
//         cin>>id;
//     }
//     void display(){
//         cout<<"NAME OF COLLEGE:"<<clg_name<<endl;
//         cout<<"LOCATION OF COLLEGE:"<<location<<endl;
//         int iD;
//         getid(iD);
//         cout<<"COLLEGE ID"<<iD<<endl;
//     }
// };
// class person : public clg {
//     public:
//     char name[29],qaulifi[49],state[49];
//     public: 
//     void get(){
//         cout<<"ENTER YOUR NAME:"<<endl;
//         cin>>name;
//         cout<<"ENTER YOUR QUALIFICATION:"<<endl;
//         cin>>qaulifi;
//         cout<<"ENTER YOUR STATES NAME:"<<endl;
//         cin>>state;
//     }
//     void put(){
//         accept();
//         display();
//         cout<<"NAME:"<<name<<endl;
//         cout<<"QUALIFICATION:"<<qaulifi<<endl;
//         cout<<"STATE:"<<state<<endl;
//     }
// };
// class employee: public person{
//  public:
//   int emp_id;
//   char emp_dept[30];
//   public:
//   have(){
//   cout<<"enter your id:"<<endl;
//   cin>>emp_id;
//   cout<<"enter your dept:"<<endl;
//   cin>>emp_dept;
//   } 
//   give(){
//   cout<<"employee id:"<<emp_id<<endl;
//   cout<<"employee department:"<<emp_dept<<endl;
//
// int main(){
//     person p1;
//     p1.getid(101);
//     p1.get();
//     p1.put();
//     return 0;
// }

#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void student  :: public set_roll_number(int r){
    rollno=r;
}
void student  :: public get_roll_number(){
    cout<<"The roll number is "<<rollno;
}

class exam : public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float,float);
    void get_marks();
}
void exam :: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam :: get_marks(){
 cout<<"THE MARKS FOR MATHS ARE:"<<m1<<endl;
 cout<<"THE MARKS FOR PHYSICS ARE:"<<physics<<endl;
}
class result : public exam{
    float percentage;
    public:
     void display(){
        get_roll_number|();
        get_marks();
        cout<<"your percentage is:"<<(maths+physics)/2<<endl;
     }
};
int main(){
    result s1;
    s1.set_roll_number(420);
    s1.set_marks(96,89);
    return 0;
}