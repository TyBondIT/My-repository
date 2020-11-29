#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
srand((unsigned)time(0));
int coins = rand() % 100 + 1;
int result = rand() % 100 + 1;
string choice;
string yes ;
string choice1;

do
{
cout << "************************************************\n";
 cout << "Player 1: Choose between Heads or Tails!\n";
 cout << "************************************************\n";
cin >> choice;
cout << "************************************************\n";
cout << "Player 2: Choose between Heads or Tails\n";
cout << "************************************************\n";
cin >> choice1;
cout << "************************************************\n";
if (result <= 50)
{
    cout << "The result of the coin flip is Heads\n";
    cout << "************************************************\n";
}
else
{
     cout << "The result is Tails!\n";
     cout << "************************************************\n";
}

cout << "Do you want to play again? Type 'Yes' to restart!\n";
cout << "************************************************\n";
cin >> yes;
cout << "************************************************\n";
} while (yes == "yes");




    return 0;
}
// A simple Heads or Tails game!!!