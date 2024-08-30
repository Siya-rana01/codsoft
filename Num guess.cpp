#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generateRandomNumber() {
    srand(time(0));
    return rand() % 100 + 1;
}
void playGame(int secretNumber) {
    int guess;
    int attempts = 0;
    const int maxAttempts = 10;

    cout << "Guess the number (between 1 and 100): ";

    while (attempts < maxAttempts) {
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << " You guessed the correct number in " << attempts << " attempts.\n";
            return;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Too high! Try again: ";
        }
    }

    cout << " The correct number was " << secretNumber << ".\n";
}

int main() {
    int secretNumber = generateRandomNumber();
    playGame(secretNumber);
    return 0;
}
