#include <iostream>

using namespace std;

int main(){

string answer;
string close;
string answer2;
string close2;


do
{
cout << "What is the square root of 9?\n";
cout << "a)3.14 b)3 c)4.13\n";
cin >> answer;

    if(answer == "b")
        cout << "Correct!!!\n";
    else
        cout << "Wrong answer!!!\n";


    cout << "do you want to try again? Y/N\n";
    cin >> close;
} while (close == "Y");



do
{
    cout << "What does 3.14 mean?\n";
    cout << "a) The square root of 10 b) the circumference of the sun c) pie\n";
    cin >> answer2;

    if (answer2 == "c")
    {
        cout << "Correct!!!\n";
    }
    else
    {
        cout << "Incorrect!!!\n";
    }
    

cout << "Do you want to try again? Y/N\n";
cin >> close2;
} while (close2 == "Y");


return 0;
}
