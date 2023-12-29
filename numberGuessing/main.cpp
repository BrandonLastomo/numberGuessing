#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int menuChoice, guess, number;

    // randomize number with seed so every time the program runs, the number changes
    srand(time(0));

    do{
        // welcome
        cout << "Welcome to Number Guessing Game!\n\n";
        cout << "1. Start\n2. About this Game\n3. Exit\n> ";
        cin >> menuChoice;

        switch (menuChoice){
        case 1:
            // input guess number
            do{
                number = rand() % 100;
                cout << "Enter you guess! ";
                cin >> guess;

                // check if number is true
                if (guess == number){
                    // if true, say congrats
                    cout << "\nCongrats! You guessed it right!\nWant to play once more?\n1. Yes\n2. No\n> ";
                } else {
                    // if no, guess again?
                    cout << "You guessed it wrong... The right number is "<< number << "\n\nWant to play once more?\n1. Yes\n2. No\n> ";
                }
                
                cin >> menuChoice;
                if (menuChoice == 2){
                    // no, out from program
                    guess = number;
                    menuChoice = 2;
                    cout << "Thanks for playing!";
                } else {
                    guess = -1;
                }
                
            } while (guess != number);
            
            break;
        case 2:
            cout << "Guess number from 0-100!\nEnter your guess and you'll find out whether you guess it right or wrong.\n\n";
            cout << "*Please enter your guess in integer\n\n";
            break;
        case 3:
            cout << "See you later!";
            break;
        
        default:
            cout << "Your choice is invalid! Check your choice once more!\n\n";
            break;
        }
    } while (menuChoice != 3);
    
    return 0;
}