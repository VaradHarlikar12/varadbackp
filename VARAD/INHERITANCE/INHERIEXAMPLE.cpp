/*
pattern(R"(^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$)")
^-start of string 
$-end of string
[\w-\.]-one or more words character (letters, digits, underscores),
 hyphens, or dots.
@-attherate
([\w-]+\.)+- One or more groups of 
word characters or hyphens followed by a dot
*/
#include<iostream>
#include<regex>
#include<string>
using namespace std;
class person: public schooling,public college,public employement{
    protected:
    string usegmail;
    public:
    regex phone_no(R("^[/d]{9}"));
    char name[30];
    public:
    bool validid( string input){
        regex pattern(R"(^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$)");//varadharilkar@gmail.com  
        return pattern;
    }
    void details(){
        string phone_number;
        cout<<"ENTER YOUR NAME:"<<endl;
        cin>>name;
        cout << "Enter a 9-digit phone number: ";
        cin >> phone_number;

    // Check if the phone number matches the pattern
    if (regex_match(phone_number, phone_no)) {//checking patterns and number given
        cout << "Valid phone number: " << phone_number <<endl;
    }
    else {
        cout << "Invalid phone number." <<endl;
        return false;
    }
  }
};
class schooling{
    protected:
    char school_name[30];
    int marks_10th;
    char location[59];
    public:
    void get_school(char a,int m,char l){
        school_name=a;
        marks_10th=m;
        location=l;
    }
    void display_scho(){
    cout<<"SCHOOL"<<school_name<<endl;  
    cout<<"10TH RESULT"<<marks_10th<<endl;
    cout<<"LOCATION"<<location<<endl;
    }
};  
class college{
    protected:
    char college_name[30];
    char location[59];
    public:
    void get_col(char a,char l){
        college_name=a;
        loc=l;
    }
    void display_college(){
    cout<<"COLLEGE"<<college_name<<endl;  
    cout<<"LOCATION OF COLLEGE"<<loc<<endl;
    }
};
class employement{
    protected:
    char company_name[30];
    char branch[59];
    int salary;
    public:
    void get_employement(char a,char b,int sal){
        company_name=a;
        branch=b;
        salary=sal;
    }
    void display_employement(){
    cout<<"COMPANY NAME"<<company_name<<endl;  
    cout<<"SALARY"<<salary<<endl;  
    cout<<"LOCATION OF COMPANY BRANCH "<<branch<<endl;
    }
}; 
int main(){
    person obj1;
    obj1.get_employement();
      char school_n,location,college_n,college_loc,emp_company,emp_branch;
      int marks,sal;
        cout<<"ENTER YOUR SCHOOL NAME:"<<endl;
        cin>>school_n;
        cout<<"ENTER YOUR 10th BOARD MARKS:"<<endl;
        cin>>marks;
        cout<<"ENTER YOUR SCHOOL'S LOCATION:"<<endl;
        cin>>location;
        getschool(school_n,marks,location);
        cout<<"ENTER YOUR COLLEGE NAME:"<<endl;
        cin>>college_n;
        cout<<"ENTER YOUR COLLEGE'S LOCATION:"<<endl;
        cin>>college_loc;
        get_col(college_n,college_loc);
        cout<<"ENTER YOUR COMPANY NAME:"<<endl;
        cin>>emp_company;
        cout<<"ENTER YOUR BRANCH NAME:"<<endl;
        cin>>emp_branch;
        return 0;
}