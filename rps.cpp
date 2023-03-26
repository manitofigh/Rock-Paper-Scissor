#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>
using namespace std;

string choice;
int userScore = 0;
int botScore = 0;

string computerChoice(){
    srand(time(0));
    int computerChoice = rand() % 3 + 1;
    if (computerChoice == 1) return "Rock";
    else if (computerChoice == 2) return "Paper";
    else return "Scissor";
}

int main(){
    cout << "\n************************************" << endl;
    cout << "***                              ***" << endl;
    cout << "***   Welcome to the RPS game!   ***" << endl;
    cout << "***       First to 3 wins!       ***" << endl;
    cout << "***                              ***" << endl;
    cout << "************************************" << endl;

    cout << endl;
    cout << "*********************" << endl;
    cout << "**  Your score: " << userScore << "  **" << endl;
    cout << "**  Bot score: " << botScore <<  "   **" << endl;
    cout << "*********************" << endl;

    cout << "\nChoose your choice: " << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    // if ((choice == "1" || choice == "rock") && ){

    // }
}