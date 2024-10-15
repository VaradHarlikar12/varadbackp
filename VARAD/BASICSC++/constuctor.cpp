// CONSTRUCTORS ARE USED IN CLASSES 
// THEY GET INVOKED AUTOMATICALLY WHEN OBJECS ARE CREATED 
// THEY HAVE SAME NAME AS THE CLASS 
// THE DON'T HAVE AN RETURN TYPE AS THEY DON'T RETURN ANYTHING
/*characteristics of constructors
   they should be declared inside the public section of the class
   */
//   #include<iostream>
//   using namespace std;
//   class CARS{
//     public:
//     char name_car[30];
//     public:
//         //default constructor
//         CARS(){ 
//         cout<<"ENTER YOUR CAR NAME:"<<endl;
//         cin>>name_car;
//             }
//         CARS(int price){
//         cout<<"enter your car name and price:"<<endl;
//         }
//   }
//   int main(){
      
//       return 0;
//   }
#include<iostream>
using namespace std;
class point {
    int x,y;
    public:
     point(int a,int b){
        x=a;
        y=b;    
     }
     void display(){
        cout<<"The point is:("<<x<<","<<y<<")"<<endl;
     }
};
//CREATE A FUNCTION WHICH TAKES 2 POINT OBJECTS  AND COMPUTESTHE DISTANCE BETWEEN THEM
//FORMULA FOR THIS IS UNDERROOT OF (X2-X1)+(Y2-Y1)
int main(){ 
    point P1(1,2);
    P1.display();
    point P2(2,3);
    P2.display();   
    return 0;
}