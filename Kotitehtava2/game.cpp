#include "game.h"
#include <iostream>

void Game::printGameResult()
{
    cout << "You got the right number " << randomNumber << " with " << numOfGuesses << " guesses. " << endl;
}

Game::Game(int)
{
    cout << "Choose the maximum number" << endl;
    cin >> maxNumber;
    cout<<"GAME CONSTRUCTOR: object initialized with " <<maxNumber<<" as a maximum value"<<endl;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
    cout << "Guess a number between 1-" << maxNumber << endl;
    do{
        cin >> playerGuess;
        numOfGuesses++;
        if(playerGuess < randomNumber) {
            cout << "The number is too small!" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "The number is too big!" << endl;
        } else {
            cout << "Correct!" << endl;
            printGameResult();
        }
    } while (randomNumber != playerGuess);
}
