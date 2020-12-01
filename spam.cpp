#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

ofstream txt("spambot test.txt");
bool spam = true;

while (spam = true)
{
    txt << "Get spammed loser!!!\n";
}
txt.close();

    return 0;
}
// for the love of god, DO NOT LEAVE THIS PROGRAM RUNNING FOR TOO LONG. It will go on forever and take up all the memory on your computer. 