// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
      int age;
      cout<<"your age:"<<endl;
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