#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;
    string author = "Peter";

protected:
    float price;

public:
    string publisher;

    void displayAuthorInfo() {
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b;

    // Public member can be accessed and modified directly
    b.publisher = "My Book";
    cout << "Publisher: " << b.publisher << endl;

    return 0;
}
