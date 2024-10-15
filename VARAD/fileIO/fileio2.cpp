#include<iostream>
#include<fstream>
using namespace std;
//herte we connect file to hout stream
// hout will directly connect this file to the file i mentioned . hout will work as it redirects to file 
//hout will read and write 
int main(){
    ofstream hout("sample.txt");
    cout<<"Enter your name:";
    string name;
    cin>>name;
    
    hout<<"my name is "+name;
    hout.close();

    ifstream hin("sample1.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is:"<<content;
    hin.close();
    
    return 0;
}