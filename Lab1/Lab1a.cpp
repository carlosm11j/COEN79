#include <iostream>
#include <string>
using namespace std;

//Print the non/alphanumeric characters in an inputed word
void program1() {
  string word = "";
  int alphanumCounter = 0;
  int otherCounter = 0;
  //Input word from user
  std::cout << "Enter a word: ";
  std::cin >> word;
  //Iterate through each character in word
  for(int i=0; i<word.size(); i++) {
    //Check if character isn't a space
    if(word[i] != ' ') {
      if(isalnum(word[i])) {
        alphanumCounter++;
      }
      else {
        otherCounter++;
      }
    }
  }
  std::cout << word << ": has " << alphanumCounter << " alphanumeric characters and " << otherCounter << " other characters." << '\n';
}

int main() {
  program1 ();
  return 0;
}
