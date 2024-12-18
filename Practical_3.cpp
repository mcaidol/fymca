#include <iostream>
using namespace std;
int main()
{
int a,b;
int ch;
char choice;
cout<< "ENTER ANY TWO NO : ";
cin>>a>>b;
do
{
cout<< "\nenter choices, 1 for sum , 2 for substract, 3 for multiply 2 for divide " ;
cin>>ch;
switch(ch)
{
case 1:
{
int sum = a+b;
cout<< sum;
break;
}
case 2:
{
int sub = a-b;
cout<< sub;
break;
}
case 3:
{
int mul = a*b;
cout<< mul;
break;
}
case 4:
{
int div = a/b;
cout<< div;
break;
}
}
cout<<"\nwant to countie or not?\n";
cin>>choice;
}while(choice=='y');
return 0;
}