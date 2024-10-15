// #include<iostream>
// using namespace std;
// class pointer{
//     public :
//     char name;
//     int  rollno;
//     public:
//     void accept(){
//         cout<<"ENTER YOUR NAME"<<endl;
//         cin>>name;
//         cout<<"ENTER YOUR ROLL NUMBER"<<endl;
//         cin>>rollno;
//     }
//     void display(){
//         cout<<"YOUR NAME IS :"<<name<<endl;
//         cout<<"YOUR ROL NUMBER IS :"<<rollno<<endl;
//     }
// };
// int main(){
//     pointer b;
//     pointer *ptr=&b;
//     ptr->accept();//(*PTR).ACCEPT()
//     ptr->display();//(*PTR).DISPLAY()
//     return 0;
// // }


// #include<iostream>
// using namespace std;
// class book{
//     string author,bname;
//     int price;
//     public:
//     void accept(string a,string bn,int p){
//         author=a;
//         bname=bn;
//         price=p;
//     }
//     void display(){
//         cout<<"AUTHOR NAME:"<<author<<endl;
//         cout<<"BOOK NAME:"<<bname<<endl;
//         cout<<"PRICE OF NAME:"<<price<<endl;
//     }
// };
// int main(){
//     book b;
//     book *ptr=&b;
//     ptr->accept("VARAD","horror",1000);
//     ptr->display();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class birthday{
//     public:
//     string name;
//     int day,month,year;
//     public:
//     birthday(){
//         cout<<"ENTER YOUR DATE OF BIRTH"<<endl;
//         cout<<"PLEASE MAKE SURE U PUT IT IN DD/MM//YYYY FORMAT"<<endl;
//     }
//     void accept(){
//         cout<<"ENTER YOUR NAME"<<endl;
//         cin>>name;
//         cout<<"ENTER YOUR DAY OF BIRTH"<<endl;
//         cin>>day;
//         cout<<"ENTER YOUR MONTH OF BIRTH"<<endl;
//         cin>>month;
//         cout<<"ENTER YOUR YEAR OF BIRTH"<<endl;
//         cin>>year;
//     }
//     void display(){
//         cout<<"name of person"<<name<<endl;
//         cout<<"YOUR BIRTHDAY IS :"<<day<<"//"<<month<<"//"<<year<<endl;
//     }
// };
// int main(){
//     birthday b;
//     b.accept();
//     b.display();
//     return 0;
// }