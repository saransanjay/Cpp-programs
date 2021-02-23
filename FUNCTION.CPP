#include<iostream.h>
#include<conio.h>
int addition(int a,int b){
cout<<"the addtion of a and b="<<a+b;
}
int subraction(int a,int b){
cout<<"the subraction of a and b="<<a-b;
}
int multiplication(int a,int b){
cout<<"the multiplication of a and b="<<a*b;
}
int division(int a,int b){
cout<<"the division of a and b="<<a/b;
}
void main(){
int a,b,c;
clrscr();
cout<<"enter the value of a and b";
cin>>a>>b;
cout<<"choose the arithmetic operation\nadd=1\nsub=2\nmul=3\ndiv=4\n";
cin>>c;
switch(c){
case 1:
addition(a,b);
break;
case 2:
subraction(a,b);
break;
case 3:
multiplication(a,b);
break;
case 4:
division(a,b);
break;
defalut:
cout<<"enter the value between 1 to 4";
}
getch();
}
