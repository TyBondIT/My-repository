// Very simple guess the number game. Took me 5 minutes to code!!
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){



srand (time(NULL));
int secret = rand() % 100 + 1;
int guess;
char T;
do
{
    cout << "Guess a number between 1 and 100!\n";
    cin >> guess;
    if (guess == secret)
    {
        cout << "Congratulations!!! You guessed the number!\n";
        cout << "Press any key to terminate the program: ";
        cin >> T;
    }
    else
    {
        cout << "wrong number. Try again!!\n"; //dont put the result in here because the number will not change as long as you dont restart the program.
    }
    
} while (guess != secret);







return 0;
}