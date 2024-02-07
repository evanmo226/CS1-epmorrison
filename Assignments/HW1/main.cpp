/*
    StdIO HW1
    
    By: Evan Morrison
    Date: 6 Feb 2024
    
    This program shows what various stages of the hangman game will look like.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string player1;
    cout << "What is your name?" << endl;
    getline(cin, player1);
    cout << "\nIt is great to meet you " << player1 << "!" << endl;

    cout << "\nThe hangman game is under construction, maybe you'll get to play it in a few weeks..." <<
    "\nThis is what various stages of the hangman game will look like...\n" << endl;

    string stage0;
    stage0 = "\t|--------------\n\t|/\t|\n\t|\n\t|\n\t|\n\t|\n\t|\n==============";

    string stage1;
    stage1 = "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\n\t|\n\t|\n\t|\n==============";
    string stage2;
    stage2 = "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\n\t|\n\t|\n==============";
    string stage3;
    stage3 = "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\t|\n\t|\n\t|\n==============";
    string stage4;
    stage4 = "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\t|\n\t|      /\n\t|\n==============";
    string stage5;
    stage5 = "\t|--------------\n\t|/\t|\n\t|\tO\n\t|\t|\n\t|\t|\n\t|      / \\\n\t|\n==============";
    string stage6;
    stage6 = "\t|--------------\n\t|/\t|\n\t|\tO\n\t|      \\|\n\t|\t|\n\t|      / \\\n\t|\n==============";
    string stage7;
    stage7 = "\t|--------------\n\t|/\t|\n\t|\tO\n\t|      \\|/\n\t|\t|\n\t|      / \\\n\t|\n==============";

    cout << "\nStage 0\n" << stage0 << endl;
    cout << "\nStage 1\n" << stage1 << endl;
    cout << "\nStage 2\n" << stage2 << endl;
    cout << "\nStage 3\n" << stage3 << endl;
    cout << "\nStage 4\n" << stage4 << endl;
    cout << "\nStage 5\n" << stage5 << endl;
    cout << "\nStage 6\n" << stage6 << endl;
    cout << "\nStage 7\n" << stage7 << endl;


    return 0;
}