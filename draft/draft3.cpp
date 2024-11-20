#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>  // Add this line

using namespace std;

class HangmanGame {
private:
    string wordToGuess;
    string guessedWord;
    vector<char> guessedLetters;
    int attemptsLeft;
    const int MAX_ATTEMPTS = 6;

public:
    HangmanGame() {
        srand(time(0));
        attemptsLeft = MAX_ATTEMPTS;
        wordToGuess = getRandomWord();
        guessedWord = string(wordToGuess.length(), '_');
    }

    // Get a random word from a list
    string getRandomWord() {
        vector<string> wordList = {"programming", "hangman", "cplusplus", "computer", "developer", "language", "puzzle"};
        int randomIndex = rand() % wordList.size();
        return wordList[randomIndex];
    }

    // Display the current state of the guessed word
    void displayWord() {
        cout << "Word: ";
        for (char ch : guessedWord) {
            cout << ch << " ";
        }
        cout << endl;
    }

    // Display the guessed letters
    void displayGuessedLetters() {
        cout << "Guessed Letters: ";
        for (char ch : guessedLetters) {
            cout << ch << " ";
        }
        cout << endl;
    }

    // Check if the letter guessed is correct
    bool guessLetter(char letter) {
        bool correctGuess = false;
        for (int i = 0; i < wordToGuess.length(); ++i) {
            if (wordToGuess[i] == letter) {
                guessedWord[i] = letter;
                correctGuess = true;
            }
        }
        return correctGuess;
    }

    // Check if the player has won
    bool isWon() {
        return guessedWord == wordToGuess;
    }

    // Check if the player has lost
    bool isLost() {
        return attemptsLeft == 0;
    }

    // Update the remaining attempts
    void updateAttempts() {
        --attemptsLeft;
    }

    // Game loop
    void play() {
        char guessedLetter;
        while (true) {
            system("clear"); // or system("cls") for Windows

            displayWord();
            displayGuessedLetters();
            cout << "Attempts left: " << attemptsLeft << endl;

            if (isWon()) {
                cout << "Congratulations! You've won!" << endl;
                break;
            }

            if (isLost()) {
                cout << "Game Over! The word was: " << wordToGuess << endl;
                break;
            }

            cout << "Guess a letter: ";
            cin >> guessedLetter;

            // Check if the letter has already been guessed
            if (find(guessedLetters.begin(), guessedLetters.end(), guessedLetter) != guessedLetters.end()) {
                cout << "You've already guessed that letter!" << endl;
                continue;
            }

            guessedLetters.push_back(guessedLetter);

            if (!guessLetter(guessedLetter)) {
                updateAttempts();
                cout << "Wrong guess!" << endl;
            } else {
                cout << "Good guess!" << endl;
            }

            cout << endl;
            // Wait for user to press a key to continue
            cin.ignore();
            cin.get();
        }
    }
};

int main() {
    cout << "Welcome to Hangman Game!" << endl;
    HangmanGame game;
    game.play();
    return 0;
}
