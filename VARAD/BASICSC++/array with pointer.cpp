#include<iostream>
using namespace std;
int main(){
    int arr[12,23,35,54,65,75,45],i;
    cout<<"values of marks are"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl;
    cout<<arr[6]<<endl;
    //we can also change values of arrray
    arr[0]=42;
    for(i=0;i<=6;i++)
    {
        cout<<"the value of marks"<<i<<"is"<<arr[i]<<endl;
        
    }
    while(i<=7)//using while
    {
        cout<<"the value of marks"<<i<<"is"<<arr[i]<<endl;
        i++;
    }
    do
    {
        cout<<"marks"<<i<<"is"<<arr[i]<<endl;
    } while (i<=7);
    return 0;
    int *p=arr;
    cout<<"value of *p ar value"<<*p<<endl;
    cout<<"value of *p+1 ar value"<<*p+1<<endl;
    cout<<"value of *p+2 ar value"<<*p+2<<endl;     
     