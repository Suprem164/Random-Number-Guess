#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber(int min, int max) {
    return min + rand() % ((max + 1) - min);
}

int main() {

    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = generateRandomNumber(1, 100);
    int playerGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n\n";
    cout << "I have chosen a number between 1 and 100. Can you guess what it is?\n\n";


    while (playerGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        attempts++;

        if (playerGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (playerGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}
