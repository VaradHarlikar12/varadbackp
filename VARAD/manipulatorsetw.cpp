#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int a=3,b=13,c=1234;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    cout<<"value of c:"<<c<<endl;
    cout<<endl;
    cout<<"value of a:"<<setw(10)<<a<<endl;
    cout<<"value of b:"<<setw(4)<<b<<endl;
    cout<<"value of c:"<<setw(5)<<c<<endl;
    return 0;
}
