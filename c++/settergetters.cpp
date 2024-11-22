#include <iostream>
using namespace std;

class Book {
    private:
        string title;
        string author;
        int pages;

    public:
        // Constructor
        Book(string aTitle, string aAuthor, int aPages){
            setTitle(aTitle);
            author = aAuthor;
            pages = aPages;
        }

        // Public method to set the title
        void setTitle(string aTitle){
            title = aTitle;
        }

        // Public method to get the title
        string getTitle(){
            return title;
        }

        // Optional: Print Book details
        void printDetails(){
            cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
        }
};

int main(){
    // Create an object of the Book class
    Book book1("mnyama", "jb", 500);

    // Update the title
    book1.setTitle("Man");

    // Print book details (optional)
    book1.printDetails();

    return 0;
}
