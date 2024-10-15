#include<iostream>
using namespace std;
int main()
{
 float d=34.3;
 long double c=34.4;
 cout<<"size of value d="<<sizeof(34.4f);
 cout<<"size of value d="<<sizeof(34.4F);
 cout<<"size of value d="<<sizeof(34.3l);
 cout<<"size of value d="<<sizeof(34.3L);
 return 0;
}