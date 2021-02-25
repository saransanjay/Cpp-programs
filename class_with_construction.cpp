#include<iostream>
#include<conio.h>
using namespace std; 
class student{
public:
    int id;
    string name;
student(int a,string b){
    cout<<"construction is called\n";
    id=a;
    name=b;
}
void display(){
    cout<<"id="<<id<<"\nname="<<name;
}
};
int main(){
        int a;
        string b;
        cout<<"\nenter your id and name\n";
        cin>>a>>b;
    student s1 = student(a,b);
    s1.display();  
    return 0;
    getch();
}