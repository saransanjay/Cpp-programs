#include<iostream.h>
#include<conio.h>
multiplication(int a,int b){
cout<<"multiplication of a and b is ="<<a*b;
}
division(int a,int b){
cout<<"division of a and b is ="<<a/b;
}
void main(){
int a,b,c;
clrscr();
do{
cout<<"enter the value of a and b greater than zero";
cin>>a>>b;
}while(a==0||b==0);
cout<<"choose the arithmetic operation \nmul=1\ndiv=2\n";
cin>>c;
switch(c){
case 1:
multiplication(a,b);
break;
case 2: division(a,b);
break;
default:
cout<<"\nenter the value  1 or 2";
break;
}
getch();
}

