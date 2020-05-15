#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;

    char parseUserThrow(char *userInput)
{
    if ((*userInput == 'r') || (*userInput == 'p') || (*userInput == 's') || (*userInput == 'R') || (*userInput == 'S') || (*userInput == 'P'))
    {
        return *userInput;
    }
    else
    {
       cout<< "You need to throw R for rock, P for paper, or S for scissors." << endl;
    }
    
    
}

int getComputerThrow()
{
    char computerThrow[3];

    computerThrow[0] = 'r' ;
    computerThrow[1] = 'p';
    computerThrow[2] = 's';
    srand(time(NULL));
    return computerThrow[rand() % 3];
    
}

int compareThrows(char user, char computer)
{
    if ((user == 'p' && computer == 'p') || (user == 'r' && computer == 'r') || (user == 'S' && computer == 's') || (user == 'P' && computer == 'p') || (user == 'R' && computer == 'r') || (user == 's' && computer == 's'))
    {
        cout<< "You tied" << endl;
        return 0;
    }
    else if ((user == 'p' && computer == 'r') || (user == 'r' && computer == 's') || (user == 's' && computer == 'p') || (user == 'P' && computer == 'r') || (user == 'R' && computer == 's') || (user == 'S' && computer == 'p'))
    {
        cout<< "You won" << endl;
        return 1;
    }
    else if ((computer == 'p' && user == 'r') || (computer == 'r' && user == 's') || (computer == 's' && user == 'p') || (computer == 'p' && user == 'R') || (computer == 'r' && user == 'S') || (computer == 's' && user == 'P'))
    {
        cout<< "You lost" << endl;
        return -1;
    }
};
int main (int argc, char ** argv)
{
    char userThrow = parseUserThrow(argv[1]);
    char computerThrow = getComputerThrow();
    int result = compareThrows(userThrow, computerThrow);

return result;
    

}


