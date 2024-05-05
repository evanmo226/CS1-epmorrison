/*
    Evan Morrison
    May 4, 2024

    Final Project

    This program is a game of hangman game.
*/

#include <iostream>
#include <cassert>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;


const int MAX_GUESS = 7;



int randomNumber();

string selectWord();
string wordLine(string);

void readWords(string *);
void stages(int);

void program();
void game(string);

bool containsChar(string, char);


void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]){
    //starts program and randomizes the time value
    clearScreen();
    srand(time(NULL));
    program();
    return 0;
}


int randomNumber(){
    return rand()%20 + 1;
}

void readWords(string *words){
    string place;
    int wordCount = 0;
    //accesses the word text file and puts it into an array
    ifstream file("words.txt");
    if (file.is_open()){                                        //reference cplusplus.com helped me find out how to use this
        while(getline(file, place) && wordCount < 20){
        words[wordCount++] = place;
        }
        file.close();
    } 
}

string selectWord(){
    string words[20];
    readWords(words);
    //use a random number to select a random word for the array
    int num = randomNumber();
    return words[num-1];
}

string wordLine(string word){
    //creats a line of _ with the length of the word
    string soFar(word.length(), '_');
    return soFar;
}

bool containsChar(string word, char guess){
    //sees to see if the word contains the letter that was guessed
    return word.find(guess) != string :: npos;
}

void game(string word){
    string guesses[8];
    int wrong = 0;
    char guess;
    string used = "";
    bool solved = false;


    string soFar = wordLine(word);
    clearScreen();

    cout << "Start guessing letters!" << endl;


    while(!solved && wrong < MAX_GUESS){
        clearScreen();
        stages(wrong);
        cout << "Letters used - " << used << endl;
        cout << "Word: " << soFar << endl;
        cout << "Guess a letter: ";
        cin >> guess;
        guess = tolower(guess);
        
        //see if user has already entered this character
        while(used.find(guess) != string::npos){
            cout << "You have already guessed " << guess << ". Try again: ";
            cin >> guess;
            guess = tolower(guess);
        }

        used = used + guess + " ";

        if (containsChar(word, guess)){
            for (size_t i = 0; i < word.length(); i++){
                if (tolower(word[i]) == guess){
                    soFar[i] = guess;
                }
                if (soFar == word) solved = true;
            }
        } else {
            wrong++;
        }
    }
    if (solved){
        clearScreen();
        stages(wrong);
        cout << "Great job! You correctly guessed the word " << word << "!" << endl;
    } else {
        clearScreen();
        stages(wrong);
        cout << "You did not correctly guess the word " << word << "." << endl;
    }
}

void program(){
    //sets word to all lowercase
    string oldWord = selectWord();
    string word = "";
    for (char c : oldWord){
        word += tolower(c);
    }


    cout << "Hello! Welcome to The Game of Hangman!" << endl;
    cout << "What is your name?" << endl;
    string name;
    getline(cin, name);

    cout << "Welcome " << name << " to the game! Hit enter to start playing!" << endl;
    cin.get();

    char input;
    bool quit = false;

    //keeps game going until the user wants to quit playing
    while(!quit){
        game(word);
        cout << "Would you like to play again? (Y/y)" << endl;
        cin.ignore(1000, '\n');
        cin.get(input);
        if (tolower(input) != 'y') quit = true;
    }
}

void stages(int stage){
    //Used these from the first assignment
    stage++;
    switch(stage){
        case 1:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\n\t|\n\t|\n\t|\n\t|\n==============\n";
        break;
        }
        case 2:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\n\t|\n\t|\n\t|\n==============\n";
        break;
        }
        case 3:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\n\t|\n\t|\n==============\n";
        break;
        }
        case 4:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\t|\n\t|\n\t|\n==============\n";
        break;
        }
        case 5:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\t|\n\t|      /\n\t|\n==============\n";
        break;
        }
        case 6:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\t|\n\t|      / \\\n\t|\n==============\n";
        break;
        }
        case 7:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\tO\n\t|      \\|\n\t|\t|\n\t|      / \\\n\t|\n==============\n";
        break;
        }
        case 8:
        {
            cout << "\t|--------------\n\t|/\t|\n\t|\tO\n\t|      \\|/\n\t|\t|\n\t|      / \\\n\t|\n==============\n";
        break;
        }
    }
}