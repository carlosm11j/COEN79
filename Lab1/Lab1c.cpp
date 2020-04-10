#include <iostream>
#include <string>
#include<fstream>
using namespace std;

//Print words larger than 10 characters in a file; remove any non-alpha characters and make uppercase
void program3() {
  
  string word, tempWord, filename;
  //Input filename from user
  std:cout << "Enter filename: ";
  std::cin >> filename;
  ifstream file;
  //Open file
  file.open(filename);
  //Iterate through entire file
  while(file && file.peek() != EOF) {
    word = "";
    file >> tempWord;
    //Iterate through characters in tempWord
    for(int i=0; i<tempWord.size(); i++) {
      //Check is character is alpha
      if(isalpha(tempWord[i])) {
        word += toupper(tempWord[i]);
      }
    }
    //Check word length is more than 10
    if(word.size() >= 10) {
      std::cout << word << '\n';
    }
  }
}

int main() {
  program3 ();
  return 0;
}
