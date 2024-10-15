#include<iostream>
#include<fstream>
/*
classes useful for input/output
fstreambase
ifstream--derived from fstreabase
ofstream--derived from fstreabase
*/
//in order to work with files in c++,you will have to open it .primiraily there are two ways
//1.using constructor
//2.using member function open() of the class
using namespace std;
int main(){
    //string st="varad";
     string st1;
    //ofstream out("sample.txt");//write  in file
    //out<<st;
    //opening file and reading it   
    ifstream in("sample1.txt");//read from file
    //in>>st1;//this will only read first word so and ignore all because of spaces s..
    //we use getline.it will show haul line by line 
    getline(in, st1);
    cout<<st1<<endl;
    getline(in, st1);
    cout<<st1;
    return 0;
}