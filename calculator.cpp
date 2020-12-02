#include <iostream>
#include <math.h>
#include <string>
#include <cmath>

using namespace std;

int main(){
float Mynum, Mynum2;
char op;
char End ;


cout<<"******************** Calculator ***********************\n"; 
cout << "List of operators:\n";
cout << "##### + ##### - ##### / ##### * ##### V ##### p #####\n";
cout << "#### v is for square root! #### p is for power! #####\n";
cout << "Enter your Operator:\n";
cin >> op;

switch(op){

case '+':
cout << "Enetr your first number:\n";
cin >> Mynum;
cout << "Enter second number:\n";
cin >> Mynum2;
cout << "your answer in " << Mynum + Mynum2 << endl;
break;

case '*':
cout << "Enter your first number:\n ";
cin >> Mynum;
cout << "Enter second number:\n ";
cin >> Mynum2;
cout << "The answer is: " << Mynum * Mynum2 << endl;
break;

case '-':
cout << "Enter your first number:\n ";
cin >> Mynum;
cout << "Enter second number:\n ";
cin >> Mynum2;
cout << "The answer is: " << Mynum - Mynum2 << endl;
break;

case '/':
cout << "Enter your first number:\n ";
cin >> Mynum;
cout << "Enter second number:\n ";
cin >> Mynum2;
cout << "The answer is: " << Mynum / Mynum2 << endl;
break;

case 'v':
cout << "Enter the number:\n";
cin >> Mynum;
cout << "The square root of " << Mynum << " is " << sqrt(Mynum) << "!" << endl;
break;

case 'p':
cout << "Enter the number:\n";
cin >> Mynum;
cout << "Enter the power of the equation:\n";
cin >> Mynum2;
cout <<Mynum << " to the power of " << Mynum2 << " is " << pow(Mynum,Mynum2) << endl;
break;

default:
cout << "INVALID OPERATOR OR OPERATION!\n ";
break;
}

cout << "Press Any Key To Terminate The Program!\n";
cout << "**************************************************\n";
cin >> End ;
return 0;

} 
