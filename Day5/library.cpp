// Library Catalog with Books and Journals:
// Problem Statement: Build a library catalog system. Create a base class LibraryItem with
// properties like title and author. Then, derive classes like Book and Journal, each with their
// unique properties. Implement methods to check out and return items in the derived classes.

#include <iostream>
#include <string>
using namespace std;

class LibraryItem
{
protected:
    string title;
    string author;
    int numOfitem;

public:
    LibraryItem()
    {
        title = "abc";
        author = "xyz";
        numOfitem = 0;
    }
    LibraryItem(string title, string author, int numOfitem)
    {
        this->title = title;
        this->author = author;
        this->numOfitem = numOfitem;
    }
    virtual void checkout(int qty) = 0;
    virtual void returnItem(int qty) = 0;
};
class Book : public LibraryItem
{
public:
    Book(string title, string author, int numOfitem) : LibraryItem(title, author, numOfitem) {}
    void checkout(int qty)
    {
        while (qty <= numOfitem)
        {
            if (numOfitem <= qty)
            {
                cout << "Not enough books available" << endl;
                break;
            }
            else
            {
                numOfitem -= qty;
                cout <<qty<<" "<< "Books checked out from library" << endl;
                break;
            }
        }
        cout <<"Remaining books in library: " <<numOfitem << endl;
    }
    void returnItem(int qty)
    {

        numOfitem += qty;
        cout <<qty<<" "<< "Book returned to the library." << endl;
        cout << "Total books in libaray now is:"<< numOfitem <<endl;
    }
};
class Journal : public LibraryItem
{
public:
    Journal(string title, string author, int numOfitem) : LibraryItem(title, author, numOfitem) {}
    void checkout(int qty)
    {
        while (qty <= numOfitem)
        {
            if (numOfitem <= qty)
            {
                cout << "Not enough journals available" << endl;
                break;
            }
            else
            {
                numOfitem -= qty;
                cout <<qty<<" "<< "Journals checked out from library" << endl;
                break;
            }
        }
        cout <<"Remaining journals in library: " <<numOfitem << endl;
    }
    void returnItem(int qty)
    {

        numOfitem += qty;
        cout <<qty<<" "<< "Journal returned to the library." << endl;
        cout << "Total journal in libaray now is:"<< numOfitem <<endl;
    }
};
int main()
{
    Book b("cpp", "salman", 10);
    b.checkout(5);
    b.returnItem(2);

    Journal c("Theory of time","Stephan hawkins",15);
    c.checkout(7);
    c.returnItem(5);
}