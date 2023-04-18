#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

string userChoice;
unsigned int userScore, botScore = 0;
unsigned int roundNumber = 1; 

string botChoice(){
    srand(time(0));
    int botChoice = rand() % 3 + 1;
    if (botChoice == 1) return "Rock";
    else if (botChoice == 2) return "Paper";
    else return "Scissors";
}

void checkResult(){
    if ((userChoice == "rock" || userChoice == "1" || userChoice == "1)" || userChoice == "one") && botChoice() == "Rock"){
        cout << "\nBot chose: Rock" << endl;
        cout << "You chose: Rock" << endl << endl;
        cout << "No winner for this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
    }
    else if ((userChoice == "rock" || userChoice == "1" || userChoice == "1)" || userChoice == "one") && botChoice() == "Paper"){
        cout << "\nBot chose: Paper" << endl;
        cout << "You chose: Rock" << endl << endl;
        cout << "Bot won this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
        botScore ++;
    }
    else if ((userChoice == "rock" || userChoice == "1" || userChoice == "1)" || userChoice == "one") && botChoice() == "Scissors"){
        cout << "\nBot chose: Scissors" << endl;
        cout << "You chose: Rock" << endl << endl;
        cout << "You won this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if ((userChoice == "paper" || userChoice == "2" || userChoice == "2)" || userChoice == "two") && botChoice() == "Rock") {
        cout << "\nBot chose: Rock" << endl;
        cout << "You chose: Paper" << endl << endl;
        cout << "You won this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if ((userChoice == "paper" || userChoice == "2" || userChoice == "2)" || userChoice == "two") && botChoice() == "Paper") {
        cout << "\nBot chose: Paper" << endl;
        cout << "You chose: Paper" << endl << endl;
        cout << "No winner for this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
    }

    else if ((userChoice == "paper" || userChoice == "2" || userChoice == "2)" || userChoice == "two") && botChoice() == "Scissors"){
        cout << "\nBot chose: Scissors" << endl;
        cout << "You chose: Paper" << endl << endl;
        cout << "Bot won this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
        botScore ++;
    }

    else if ((userChoice == "scissors" || userChoice == "3" || userChoice == "3)" || userChoice == "three") && botChoice() == "Rock"){
        cout << "\nBot chose: Rock" << endl;
        cout << "You chose: Scissors" << endl << endl;
        cout << "Bot won this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
        botScore ++;
    }

    else if ((userChoice == "scissors" || userChoice == "3" || userChoice == "3)" || userChoice == "three") && botChoice() == "Paper"){
        cout << "\nBot chose: Paper" << endl;
        cout << "You chose: Scissors" << endl << endl;
        cout << "You won this round!" << endl;
        cout << "==================================" << endl;
        roundNumber ++;
        userScore ++;
    }

    else if ((userChoice == "scissors" || userChoice == "3" || userChoice == "3)" || userChoice == "three") && botChoice() == "Scissors"){
        cout << "\nBot chose: Scissors" << endl;
        cout << "You chose: Scissors" << endl << endl;
        cout << "No winner for this round!" << endl;
        cout << "==================================" << endl;
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

    while (userScore < 3 && botScore < 3){
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
        cout << endl;
        cout << "**************" << endl;
        cout << "** You Won! **" << endl;
        cout << "**************" << endl;
    }

    else if (botScore == 3) {
        cout << "\n***************" << endl;
        cout << "** You Lost! **" << endl;
        cout << "***************" << endl;
    }

}
