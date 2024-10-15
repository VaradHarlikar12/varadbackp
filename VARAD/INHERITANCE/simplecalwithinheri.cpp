#include <iostream>
#include <cmath>
using namespace std;

class simple_cal {
protected:
    int num1;
    int num2;
public:
    int sum, subs, div, multi;

    void accept(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void process_simp() {
        sum = num1 + num2;
        subs = num1 - num2;
        multi = num1 * num2;
        if (num2 != 0) {
            div = num1 / num2; // Check to avoid division by zero
        } else {
            div = 0; // Or handle the error as needed
            cout << "Division by zero is undefined." << endl;
        }
    }

    void display_display() {
        cout << "ADDING BOTH NUMBERS WE GET: " << "NUMBER1 + NUMBER2 = " << sum << endl;
        cout << "SUBTRACTING BOTH NUMBERS WE GET: " << "NUMBER1 - NUMBER2 = " << subs << endl;
        cout << "MULTIPLYING BOTH NUMBERS WE GET: " << "NUMBER1 * NUMBER2 = " << multi << endl;
        cout << "DIVIDING BOTH NUMBERS WE GET: " << "NUMBER1 / NUMBER2 = " << div << endl;
    }
};

class Scientific {
protected:
    int num3, num4;
    float sqr3, sqr4;
    float cub3, cub4;
    float sqrt3, sqrt4;
    float cbrt3, cbrt4;
public:
    void setInfo_Sci(int a, int b) {
        num3 = a;
        num4 = b;
    }

    void process_Sci() {
        sqr3 = num3 * num3;
        sqr4 = num4 * num4;
        cub3 = num3 * num3 * num3;
        cub4 = num4 * num4 * num4;
        sqrt3 = sqrt(num3);
        sqrt4 = sqrt(num4);
        cbrt3 = cbrt(num3);
        cbrt4 = cbrt(num4);
    }

    void display_Sci() {
        cout << "Square of " << num3 << ": " << sqr3 << endl;
        cout << "Square of " << num4 << ": " << sqr4 << endl;
        cout << "Cube of " << num3 << ": " << cub3 << endl;
        cout << "Cube of " << num4 << ": " << cub4 << endl;
        cout << "Square Root of " << num3 << ": " << sqrt3 << endl;
        cout << "Square Root of " << num4 << ": " << sqrt4 << endl;
        cout << "Cube Root of " << num3 << ": " << cbrt3 << endl;
        cout << "Cube Root of " << num4 << ": " << cbrt4 << endl;
    }
};

class hybrid : public simple_cal, public Scientific {
public:
    void set(int a, int b) {
        accept(a, b);       // Call to simple_cal's accept
        setInfo_Sci(a, b); // Call to Scientific's setInfo_Sci
    }

    void process() {
        process_simp();    // Call to simple_cal's process_simp
        process_Sci();     // Call to Scientific's process_Sci
    }

    void display() {
        display_display();  // Call to simple_cal's display_display
        display_Sci();     // Call to Scientific's display_Sci
    }
};

int main() {
    hybrid obj;
    int a, b;
    cout << "ENTER VALUE OF A: " << endl;
    cin >> a;
    cout << "ENTER VALUE OF B: " << endl;
    cin >> b;
    obj.set(a, b);
    obj.process();
    obj.display();
    return 0;
}

//why i am so dumb please help !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//return  anything.and when i call them they do respond and callculate but don't return it
//the mistake i did was that i made function void .which means they won't 
// #include<iostream>
// #include<cmath>
// using namespace std;
// class simple_cal{
//     protected:
//     int num1;
//     int num2;
//     public:
//     int sum,subs,div,multi;
//     public:
//     void accept(int a, int b){
//         num1=a;
//         num2=b;
//     }
//     void process_simp(){
//         sum=num1+num2;
//         subs=num1-num2;
//         multi=num1*num2;
//         div=num1/num2;
//     }
//     void display_display(void){
//           cout<<"ADDING BOTH NUMBERS WE GET:"<<"NUMBER1"<<"+"<<"NUMBER2"<<"="<<sum<<endl;
//         cout<<"SUBSTRACTING BOTH NUMBERS WE GET:"<<"NUMBER1"<<"-"<<"NUMBER2"<<"="<<subs<<endl;
//         cout<<" MULTIPLIYING BOTH NUMBERS WE GET:"<<"NUMBER1"<<"*"<<"NUMBER2"<<"="<<multi<<endl;
//         cout<<"DIVIDING BOTH NUMBERS WE GET:"<<"NUMBER1"<<"/"<<"NUMBER2"<<"="<<div<<endl;         
//     }
// };
// class Scientific  {
//     protected:
// 		int num3, num4;
// 		float sqr3, sqr4;
// 		float cub3, cub4;
// 		float sqrt3, sqrt4;
// 		float cbrt3, cbrt4;
// 	public:
// 		void setInfo_Sci(int a, int b){
// 			num3 = a;
// 			num4 = b;
// 		}
// 		void process_Sci(void){
// 			sqr3 = num3 * num3;
// 			sqr4 = num4 * num4;
// 			cub3 = num3 * num3 * num3;
// 			cub4 = num4 * num4 * num4;
// 			sqrt3 = sqrt(num3);
// 			sqrt4 = sqrt(num4);
// 			cbrt3 = cbrt(num3);
// 			cbrt4 = cbrt(num4);
// 		}
// 		void display_Sci(void){
// 			cout << "Square of " << num3 << ": " << sqr3 << endl;
// 			cout << "Square of " << num4 << ": " << sqr4 << endl;
// 			cout << "Cube of " << num3 << ": " << cub3 << endl;
// 			cout << "Cube of " << num4 << ": " << cub4 << endl;
// 			cout << "Square Root of " << num3 << ": " << sqrt3 << endl;
// 			cout << "Square Root of " << num4 << ": " << sqrt4 << endl;
// 			cout << "Cube Root of " << num3 << ": " << cbrt3 << endl;
// 			cout << "Cube Root of " << num4 << ": " << cbrt4 << endl;
// 		}
// };
// class hybrid : public simple_cal,public Scientific{
//     public:  
//     void set(int a,int b){
//         accept( a,b);
//         setInfo_Sci(a,b);
//     }   
//     void process(){
//         void process_simp(void);
//         void process_Sci(void);
//     }
//     void display(){
//         void display_display(void);
//         void display_Sci(void);
//     }
// };
// int main(){
//     hybrid obj;int a,b;
//     cout<<"ENTER VALUE OF A:"<<endl;
//     cin>>a;
//     cout<<"ENTER VALUE OF B:"<<endl;
//     cin>>b;
//     obj.set(a,b);
//     obj.process();
//     obj.display();
//     return 0;
// }