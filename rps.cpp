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
    else return "Scissors";
}

void checkResult(){
    if (choice == "rock" && computerChoice() == "Rock"){
        cout << "\nComputer's choice: Rock" << endl;
        cout << "Your choice: Rock" << endl;
        cout << "No winner for this round!";
        roundNumber ++;
    }
    else if (choice == "rock" && computerChoice() == "Paper"){
        cout << "\nComputer's choice: Paper" << endl;
        cout << "Your choice: Rock" << endl;
        cout << "Computer won this round!" << endl;
        roundNumber ++;
        botScore ++;
    }
    else if (choice == "rock" && computerChoice() == "Scissors"){
        cout << "\nComputer's choice: Scissors" << endl;
        cout << "Your choice: Rock" << endl;
        cout << "You won this round!" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if (choice == "paper" && computerChoice() == "Rock") {
        cout << "\nComputer's choice: Rock" << endl;
        cout << "Your choice: Paper" << endl;
        cout << "You won this round!" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if (choice == "paper" && computerChoice() == "Paper") {
        cout << "\nComputer's choice: Paper" << endl;
        cout << "Your choice: Paper" << endl;
        cout << "No winner for this round!";
        roundNumber ++;
    }

    else if (choice == "paper" && computerChoice() == "Scissors"){
        cout << "\nComputer's choice: Paper" << endl;
        cout << "Your choice: Scissors" << endl;
        cout << "Computer won this round!" << endl;
        roundNumber ++;
        botScore ++;
    }

    else if (choice == "scissors" && computerChoice() == "Rock"){
        cout << "\nComputer's choice: Rock" << endl;
        cout << "Your choice: Scissors" << endl;
        cout << "Computer won this round!" << endl;
        roundNumber ++;
        botScore ++;
    }

    else if (choice == "scissors" && computerChoice() == "Paper"){
        cout << "\nComputer's choice: Paper" << endl;
        cout << "Your choice: Scissors" << endl;
        cout << "You won this round!" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if (choice == "scissors" && computerChoice() == "Scissors"){
        cout << "\nComputer's choice: Scissors" << endl;
        cout << "Your choice: Scissors" << endl;
        cout << "No winner for this round!";
        roundNumber ++;
    }

    else cout << "Your input could not be validated" << endl;

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

    if (userScore == 3){
        cout << "**************" << endl;
        cout << "** You Won! **" << endl;
        cout << "**************" << endl;
    }

    else if (botScore == 3) {
        cout << "***************" << endl;
        cout << "** You Lost! **" << endl;
        cout << "***************" << endl;
    }

}