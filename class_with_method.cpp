#include<iostream>
#include<conio.h>
using namespace std; 
class student{
public:
    int id;
    string name;
getdata(int a,string b){
    cout<<"scanf method called\n";
    id=a;
    name=b;
}
void display(){
    cout<<"print method called\n";
    cout<<"id="<<id<<"\nname="<<name;
}
};
int main(){
        int a;
        string b;
        cout<<"\nenter your id and name\n";
        cin>>a>>b;
    student s1;
    s1.getdata(a,b);
    s1.display();  
    return 0;
    getch();
}