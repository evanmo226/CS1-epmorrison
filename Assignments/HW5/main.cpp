/*
    HOMEWORK 5 - Loop HW
    Design and implement the “Guess the Number” game with the following requirements.

    Name: Evan Morrison
    Date: 28 March 2024

    "Guess the Number" Game

    Steps:
    1. Define a function called randomNumber that generates and returns a random number between 1 and 20. (5 points)
    2. Define a function called readNumber that prompts the user to take a guess and return the guessed number. (10 points)
        a. Validate that number is between 1 and 20.    
    3. Define a function called checkGuess that takes two integers compares the two numbers and returns the following result:   (10 points)
        a. returns 0 if the numbers are equal
        b. returns -1 if the first number is less than second
        c. returns 2 otherwise
    4. Write 3 test cases for checkGuess function using assert statement. (10 points)
    5. Define a function called game that implements the logic of the guess the number game. (25 points)
    6. When the game is over, your program will inform whether the player won or lost the game and reveal the secret random number picked by the computer, especially if they lose. (5 points)
    7. Your game will continue to run until the user wants to quit when the game is over. (10 points)
    8. When the user quits the program/game, your program provides the following stats of the player: Bonus (10 points): 
        a. number of times played
        b. percentage pf times won
        c. percentage of times lost

*/

#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

//1
int randomNumber();
//2
int readNumber();
//3
int checkGuess(int, int);
//4
void test();
//5
bool game(string, double &, double &);

void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(){
    double win = 0;
    double lose = 0;
    double times = 0;
    string name;

    clearScreen();
    srand(time(NULL));      //makes sure the number will be random each time
    test();

    cout << "\nWelcome to -- Guess the Number -- game!\nWhat is your name?\n";
    getline(cin, name);
    cout << "Hello, " << name << ". I am thinking of a number between 1 and 20.\n";
    char again = 'Y';

    while(again == 'Y'){
        game(name, win, lose);
        times ++;
        printf("Would you like to play again? Enter [Y], anything else to quit.\n");
        cin >> again;
        clearScreen();
    }
    cout << "You played " << times << " times." << endl;
    double winp = win/times;
    double losep = lose/times;
    cout << "You won " << winp * 100 << "% of the time.\n";
    cout<< "You lost " << losep * 100 << "% of the time.\n";
    return 0;
}

//generates and returns a random number between 1 and 20
int randomNumber(){
    return rand()%20 + 1;
}

//prompts the user to take a guess and return the guessed number
int readNumber(){
    int guess;
    cout << "Guess: ";
    cin >> guess;
    return guess;
    
}

//takes two integers compares the two numbers
int checkGuess(int guess, int ans){
    if(guess == ans) return 0;
    else if(guess < ans) return -1;
    return 2;
}

//tests
void test(){
    assert(checkGuess(1, 3) == -1);
    assert(checkGuess(13, 13) == 0);
    assert(checkGuess(16, 5) == 2);
    cout << "All tests passed!\n";
}

bool game(string name, double &win, double &lose){
    int ans = randomNumber();
    cout << "You get 6 tries to guess the number. Take a guess.\n";
    for (int i=0; i<6; i++){
        int guess = readNumber();
        while (guess > 20 || guess <1){
            cout << "Your number was not between 1 and 20. Enter another number." << endl;
            cout << "My number was " << ans <<".\n";
            guess = readNumber();
        }
        int check = checkGuess(guess, ans);
        if (check == 0){
            cout << "Congratulations " << name << ", you win! You guesses my number in " << i+1 << " guesses.\n";
            win++;
            return true;
        }
        else if(check == -1){
            cout << "Your guess is too low." << endl;
        }
        else if (check == 2){
            cout << "Your guess is too high." << endl;
        }
    }
    cout << "You did not correctly guess my number.\n";
    cout << "My number was " << ans <<".\n";
    lose ++;
    return false;
}