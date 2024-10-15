// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void fn1();
//     };
// class B{
//     public:
//     void fn1();
// }
// int main(){
//     A *P;
//     B obj;
//     p=&obj;
//     P->fn1;
//     //here if i call fn()1 it will call  A CLASS FN()1
//     //BUT MY OBJ IS OF BY B TYPE AND I WANTED FN1() OF CLASS B
//     //here early binding is done 
//     // SO WHAT DO I DO IS I WILL MAKE FN()1 VIRTUAL.THIS WIL HELP ME TO AVOID MISTAKES .
//     //WHEN I WILL CALL FUNCITON IT WILL FIRST CHECK WHERE THE POINTER IS POINTING TO THEN IT WILL FIND THE FN1().

//     return 0;
// }
 //function hiding
 #include<iostream>
 using namespace std;
 class car{
    public:
    void shiftgear(){
      cout<<"car"<<endl;}
 };
 class sportscar:public car{
    public:
    void shiftgear(int a){
        cout<<"supercar"<<endl;
    };
 };
 
 int main(){
     sportscar s;
     //s.shiftgear(); this will only give u error.becuasse overloading only takes place when functions belong to smae class.
     // here it will only take perform method hiding.object is of class sports car so it will check for only sportscar.
     s.shiftgear(2);
     return 0;
 }