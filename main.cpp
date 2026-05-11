#include <iostream>
using namespace std;

int main() {
    int chosenNumber = 7;
    int userGuess = 0;
    int guesses[100];
    int count = 0;

    while (userGuess != chosenNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        guesses[count] = userGuess;
        count++;

        if (userGuess > chosenNumber) {
            cout << "Too high!" << endl;
        } else if (userGuess < chosenNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "Correct!" << endl;
        }
    }

    cout << "\nAll your guesses were:" << endl;
    for (int i = 0; i < count; i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}