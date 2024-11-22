#include <iostream>

using namespace std;

class Book {
    private:
        string author;
        int pages;
    public:
        string title;
        
    // creating the constructor for the above class Book
    Book(string aTitle, string aAuthor, int aPages){
        setTitle(aTitle);
        author = aAuthor;
        pages = aPages;

    }

    void setTitle(string aTitle){
        title = aTitle;
    }

};

int main() {
    // Use the constructor to create the Book object
    Book book1("mnyama", "jb", 500);

    // Call setTitle to update the title (if setTitle is public)
    book1.setTitle("Man");

    return 0;
}
