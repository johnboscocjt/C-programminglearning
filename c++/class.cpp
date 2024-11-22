#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

    // creating the constructor for the above class Book
    Book(string name){
        cout << name << endl;
    }

};

int main(){

    Book book1("mnyama");
    book1.title = "john the ripper";
    book1.author = "jb";
    book1.pages = 30;

    cout << book1.title;
    return 0;
}