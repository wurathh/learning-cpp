#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   int guess, randomNumber;
   int numberOfGuesses = 0;
   srand(time(0)); // create seed value for random numbers

   randomNumber = rand() % 100 + 1; // generate a random number between 1 and 100

   cout << "I am thinking of a number between 1 and 100. Guess what it is!" << endl;

   // do-while loop for guessing the number
   do {
      cout << "Enter your guess: ";
      cin >> guess;
      numberOfGuesses++;

      // check if the guess is too high or too low
      if (guess > randomNumber) {
         cout << "Guess lower." << endl;
      }
      else if (guess < randomNumber) {
         cout << "Guess higher." << endl;
      }
      // the guess is correct
      else {
         cout << "Congratulations! You guessed the number in " << numberOfGuesses << " guesses." << endl;
      }
   } while (guess != randomNumber); // continue until the guess is correct

   return 0;
}
