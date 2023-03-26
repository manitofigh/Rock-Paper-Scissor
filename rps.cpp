#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

string userChoice;
unsigned int userScore, botScore = 0;
unsigned int roundNumber = 1; 

string computerChoice(){
    srand(time(0));
    int computerChoice = rand() % 3 + 1;
    if (computerChoice == 1) return "Rock";
    else if (computerChoice == 2) return "Paper";
    else return "Scissors";
}

void checkResult(){
    if ((userChoice == "rock" || userChoice == "1") && computerChoice() == "Rock"){
        cout << "\nComputer's choice: Rock" << endl;
        cout << "Your choice: Rock" << endl;
        cout << "No winner for this round!";
        roundNumber ++;
    }
    else if ((userChoice == "rock" || userChoice == "1") && computerChoice() == "Paper"){
        cout << "\nComputer's choice: Paper" << endl;
        cout << "Your choice: Rock" << endl;
        cout << "Computer won this round!" << endl;
        roundNumber ++;
        botScore ++;
    }
    else if ((userChoice == "rock" || userChoice == "1") && computerChoice() == "Scissors"){
        cout << "\nComputer's choice: Scissors" << endl;
        cout << "Your choice: Rock" << endl;
        cout << "You won this round!" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if ((userChoice == "paper" || userChoice == "2") && computerChoice() == "Rock") {
        cout << "\nComputer's choice: Rock" << endl;
        cout << "Your choice: Paper" << endl;
        cout << "You won this round!" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if ((userChoice == "paper" || userChoice == "2") && computerChoice() == "Paper") {
        cout << "\nComputer's choice: Paper" << endl;
        cout << "Your choice: Paper" << endl;
        cout << "No winner for this round!";
        roundNumber ++;
    }

    else if ((userChoice == "paper" || userChoice == "2") && computerChoice() == "Scissors"){
        cout << "\nComputer's choice: Scissors" << endl;
        cout << "Your choice: Paper" << endl;
        cout << "Computer won this round!" << endl;
        roundNumber ++;
        botScore ++;
    }

    else if ((userChoice == "scissors" || userChoice == "3") && computerChoice() == "Rock"){
        cout << "\nComputer's choice: Rock" << endl;
        cout << "Your choice: Scissors" << endl;
        cout << "Computer won this round!" << endl;
        roundNumber ++;
        botScore ++;
    }

    else if ((userChoice == "scissors" || userChoice == "3") && computerChoice() == "Paper"){
        cout << "\nComputer's choice: Paper" << endl;
        cout << "Your choice: Scissors" << endl;
        cout << "You won this round!" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if ((userChoice == "scissors" || userChoice == "3") && computerChoice() == "Scissors"){
        cout << "\nComputer's choice: Scissors" << endl;
        cout << "Your choice: Scissors" << endl;
        cout << "No winner for this round!";
        roundNumber ++;
    }

    else cout << "\n** Your input could not be validated **" << endl;

}

int main(){
    cout << "\n************************************" << endl;
    cout << "***                              ***" << endl;
    cout << "***   Welcome to the RPS game!   ***" << endl;
    cout << "***       First to 3 wins!       ***" << endl;
    cout << "***                              ***" << endl;
    cout << "************************************" << endl;

    cout << "\n=======================================" << endl;

    while (userScore < 2 || botScore < 2){
        cout << endl;
        cout << "***********************" << endl;
        cout << "**  Your score: " << userScore << "    **" << endl;
        cout << "**  Bot score: " << botScore <<  "     **" << endl;
        cout << "**  Round number: " << roundNumber <<  "  **" << endl;
        cout << "***********************" << endl;
    
        cout << "\nChoose your choice: " << endl;
        cout << "1) Rock" << endl;
        cout << "2) Paper" << endl;
        cout << "3) Scissors" << endl;
        cin >> userChoice;
        transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);
        checkResult();
    }

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