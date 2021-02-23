#include<iostream.h>
#include<conio.h>
void main(){
int a;
clrscr();
cout<<"enter the row";
cin>>a;
for(int i=0;i<a;i++){
if(i%2==0){
cout<<"* * *\n";
}
else{
cout<<" * *\n";
}
}
getch();
}
