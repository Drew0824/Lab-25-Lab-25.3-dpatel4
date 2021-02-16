#include <iostream>
using namespace std;

/* _Strings_
Examine the code and run the program to see how it works. 
Add the following functionality to the program:
1. Also print out the user's word in lowercase letters.
2. Have the user input a second word and store it in a string variable.
3. Output whether the 2 inputted strings are the same length or not.
4. Output whether the 2 inputted strings are case insensitive equal or not (For example, "dog" would be case insentitive equals to "DOG").
*/

int main() {
  string word, wordCap, wordLow;
  cout << "Please enter a word and press enter.\n";
  cin >> word;

  string word1, wordCap1, wordLow1;
  cout << "Please enter another word and press enter.\n";
  cin >> word1;
  
  wordCap1.resize(word1.length());
  for(int i = 0; i < word1.length(); i++)
    wordCap1[i] = toupper(word1[i]);

 wordLow1.resize(word1.length());

  for (int i=0; i < word1.length(); i++)
    wordLow1[i] = tolower(word1[i]);

  
  
  wordCap.resize(word.length()); // make wordCap the same length as word
  
  for(int i = 0; i < word.length(); i++) 
    wordCap[i] = toupper(word[i]);

  wordLow.resize(word.length());

  for (int i=0; i < word.length(); i++)
    wordLow[i] = tolower(word[i]);

    cout << "Your first word lowercased: " << wordLow << endl;
  cout << "Your first word capitalized: " << wordCap << endl;
  cout << "Your first word has " << word.length() << " letters.\n" << endl;


  cout << "Your second word lowercased: " << wordLow1 << endl;
  cout << "Your second word capitalized: " << wordCap1 << endl;
  cout << "Your second word has " << word1.length() << " letters.\n" << endl;
    bool samelength;

    if (word.length() == word1.length())
	  samelength = true; // Set the flag variable
  if (samelength)
  

  cout << "Outputs are samelength" << endl;


}


