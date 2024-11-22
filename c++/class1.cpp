#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

    // creating the constructor for the above class Book
    Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;


    }

};

int main(){

    Book book1("mnyama", "jb", 500);
    

    cout << book1.title;
    return 0;
}