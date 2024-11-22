#include <iostream>

using namespace std;

int main(){
   char grade = 'A';
   string phrase1 = "Jb Villa";


   string phrase = "Johnbosco Academy";
   phrase [0] = 'a';
   string phrasesub;

   cout << phrase << endl;
   cout << phrase.length() <<endl;
   cout << phrase[2] << endl;
   cout << phrase.find("Academy", 0) <<endl;   
   cout << phrase.substr(8, 3) <<endl;
   phrasesub = phrase.substr(8, 3);
   cout << phrasesub;



    return 0;
}