#include <iostream>

using namespace std;

int main()
{
char operation;
int a;
int b ;
int z;

cout<<"please Choose the operator"<<endl;
cin>>operation;
cout<<"please Enter any two integar numbers"<<endl;
cin>>a>>b;
switch (operation)
 { case '+':
    z=a+b;
     cout<<"The result of addition is "<<z<<endl;
     break;

    case '-' :
      z=a-b;
     cout<<"The result of Subtraction is "<<z<<endl;
     break;

     case '*':
      z=a*b;
     cout<<"The result of Multiplication is "<<z<<endl;

     break;

     case '/':
         if(b!=0)
            {  z=a/b;
     cout<<"The result of Division is "<<z<<endl;}
     else { cout<<"Please enter another number rather than Zero"<<endl;}

     break;


 }



    return 0;
}
