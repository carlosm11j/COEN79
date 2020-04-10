#include <iostream>
#include <string>
using namespace std;

//Print the reverse of an inputed word
void program2() {
  string word = "", reverseWord = "";
  //Input word from user
  std::cout << "Enter a word: ";
  std::cin >> word;
  //Check that word length is more than 10
  assert(word.size() > 10);

  for(int i=0; i<word.size(); i++) {
    //If word has a space, end program
    if(word[i] == ' ') {
      return;
    }
    //Create reverse word
    reverseWord += word[word.size()-i-1];
  }
  std::cout << reverseWord << '\n';
}

int main() {
  program2 ();
  return 0;
}
