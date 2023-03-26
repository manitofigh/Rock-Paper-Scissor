#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

string choice;
int userScore, botScore, roundNumber = 0;

string computerChoice(){
    srand(time(0));
    int computerChoice = rand() % 3 + 1;
    if (computerChoice == 1) return "Rock";
    else if (computerChoice == 2) return "Paper";
    else return "Scissor";
}

void checkResult(){
    if (choice == "rock" && computerChoice() == "")
}

int main(){
    cout << "\n************************************" << endl;
    cout << "***                              ***" << endl;
    cout << "***   Welcome to the RPS game!   ***" << endl;
    cout << "***       First to 3 wins!       ***" << endl;
    cout << "***                              ***" << endl;
    cout << "************************************" << endl;

    do {
    cout << endl;
    cout << "*********************" << endl;
    cout << "**  Your score: " << userScore << "  **" << endl;
    cout << "**  Bot score: " << botScore <<  "   **" << endl;
    cout << "**  Round number: " << botScore <<  "   **" << endl;
    cout << "*********************" << endl;

    cout << "\nChoose your choice: " << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    checkResult();

    }
    while (userScore != 3 || botScore != 3);

    

}