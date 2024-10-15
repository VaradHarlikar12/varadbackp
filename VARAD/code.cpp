// Online C++ compiler to run C++ program online
#include <iostream>
int main() {
using namespace std;
      cout<<"your age:"<<endl; 
      int age;
      cin>>age;
      if(age>18 || age==18)
      {
          cout<<"license approved"<<endl;
      }
      else if(age==17) 
      {
          cout<<"learning lincense approved"<<endl;
      }
      else if(age<18)
      {
          cout<<"you need to be atleast 18 to register for license"<<endl;
      }
    return 0;
}