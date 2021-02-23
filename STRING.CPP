#include<iostream.h>
#include<conio.h>
#include<cstring.h>
void main(){
int a;
char string1[10],string2[10],string3[10];
clrscr();
cout<<"\nenter the value for the string1 and string2\n";
cin>>string1>>string2;
cout<<"string1="<<string1<<"\nstring2="<<string2;
cout<<"to find the length of string1 and string2\n";
a=strlen(string1);
cout<<"string1"<<a;
getch();
}