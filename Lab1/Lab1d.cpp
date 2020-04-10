#include <iostream>
#include <string>
using namespace std;

//Guesses number and prints out how many tries
void program4() {
  string answer;
  int counter = 0;

  std::cout << "Think of a number between 1 and 20. Press enter when you are ready." << '\n';
  cin.ignore();
  //Iterate until 'y' is inputed
  do {
    //Create random guess from 1-20 inclusive
    int guess = rand() % 20 + 1;
    std::cout << "Is the number: " << guess << "? (y or n)" << '\n';
    std::cin >> answer;
    counter++;
  }while(answer != "y");

  std:cout << "Yay. Got it in " << counter << " tries." << '\n';
}

int main() {
  program4 ();
  return 0;
}
