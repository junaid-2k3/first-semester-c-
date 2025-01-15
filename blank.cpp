#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>

using namespace std;


// Abstract Base Class
class Book
{
protected:
    string title;
    string author;
    int year;

public:
    Book() : title(""), author(""), year(0) {}
    virtual ~Book() {}

    virtual void readData()
    {
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Year: ";
        cin >> year;
        cin.ignore();
    }

    virtual void display() const
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    virtual string getType() const = 0; // Pure virtual function

    string getTitle() const { return title; }

    virtual string getDetails() const
    {
        return title + "," + author + "," + to_string(year);   // year(int) is converted to a string 
    }

    
};

class CourseBook : public Book
{
private:
    string subject;

public:
    CourseBook() : subject("") {}

    void readData() override
    {
        Book::readData();
        cout << "Enter subject: ";
        getline(cin, subject);
    }

    void display() const override
    {
        Book::display();
        cout << "subject: " << subject << endl;
    }

    string getType() const override { return "CourseBook"; }

    string getDetails() const override
    {
        return Book::getDetails() + "," + subject;
    }

};

class Literature : public Book
{
private:
    string language;

public:
    Literature() : language("") {}

    void readData() override
    {
        Book::readData();
        cout << "Enter language: ";
        getline(cin, language);
    }

    void display() const override
    {
        Book::display();
        cout << "language: " << language << endl;
    }

    string getType() const override { return "Literature"; }

    string getDetails() const override
    {
        return Book::getDetails() + "," + language;
    }

    
};

class ReligiousBook : public Book
{
private:
    string author;

public:
    ReligiousBook() : author("") {}

    void readData() override
    {
        Book::readData();
        cout << "Enter author: ";
        getline(cin, author);
    }

    void display() const override
    {
        Book::display();
        cout << "author: " << author << endl;
    }

    string getType() const override { return "ReligiousBook"; }

    string getDetails() const override
    {
        return Book::getDetails() + "," + author;
    }
};

class Customer
{
private:
    string name;
    string address;
    string phone;
    //-----------------------------------------------------------------------------------------------------------------------------------
    Book** borrowedBooks;
    int borrowedBooksCount;
    int borrowedBooksCapacity;

    void resizeBorrowedBooksArray()
    {
        borrowedBooksCapacity *= 2;
        Book** newBorrowedBooks = new Book*[borrowedBooksCapacity];
        for (int i = 0; i < borrowedBooksCount; ++i) {
            newBorrowedBooks[i] = borrowedBooks[i];
        }
        delete[] borrowedBooks;
        borrowedBooks = newBorrowedBooks;
    }

public:
    Customer() : name(""), address(""), phone(""), borrowedBooks(nullptr), borrowedBooksCount(0), borrowedBooksCapacity(10) {
        borrowedBooks = new Book*[borrowedBooksCapacity];
    }

    ~Customer() {
        delete[] borrowedBooks;
    }

    void readData(){
        cout<<"enter name of the customer "<<endl;
        getline(cin,name);
        cout<<"address : "<<endl;
        getline(cin,address);
        cout<<"enter phone :"<<endl;
        getline(cin,phone);
    }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
    }

    void displayBorrowedBooks() const {
        if (borrowedBooksCount == 0) {
            cout << "No books borrowed." << endl;
            return;
        }
        cout << "Borrowed Books:" << endl;
        for (int i = 0; i < borrowedBooksCount; ++i) {
            borrowedBooks[i]->display();
            cout << endl;
        }
    }

    string getDetails() const
    {
        return name + "," + address + "," + phone;
    }

    void borrowBook(Book *book)
    {
        if (borrowedBooksCount == borrowedBooksCapacity) {
            resizeBorrowedBooksArray();
        }
        borrowedBooks[borrowedBooksCount++] = book;
        cout << "Book \"" << book->getTitle() << "\" borrowed successfully by " << name << "." << endl;
    }
};

class Library
{
private:
    Book** books;
    Customer* customers;
    int booksCount;
    int booksCapacity;
    int customersCount;
    int customersCapacity;

    void resizeBooksArray()
    {
        booksCapacity *= 2;
        Book** newBooks = new Book*[booksCapacity];
        for (int i = 0; i < booksCount; ++i) {
            newBooks[i] = books[i];
        }
        delete[] books;
        books = newBooks;
    }

    void resizeCustomersArray()
    {
        customersCapacity *= 2;
        Customer* newCustomers = new Customer[customersCapacity];
        for (int i = 0; i < customersCount; ++i) {
            newCustomers[i] = customers[i];
        }
        delete[] customers;
        customers = newCustomers;
    }

public:
    Library() : books(nullptr), customers(nullptr), booksCount(0), booksCapacity(10), customersCount(0), customersCapacity(10) {
        books = new Book*[booksCapacity];
        customers = new Customer[customersCapacity];
    }

    ~Library()
    {
        for (int i = 0; i < booksCount; ++i) {
            delete books[i];
        }
        delete[] books;
        delete[] customers;
    }

    void addBook()
    {
        cout << "Select Book Type:\n1. Course Book\n2. literature Book\n3. Religeous Book\nEnter Choice: ";
        int choice;
        cin >> choice;
        cin.ignore();

        Book *book = nullptr;
        switch (choice)
        {
        case 1:
            book = new CourseBook(); // polymorphism type compatibility
            break;
        case 2:
            book = new Literature();
            break;
        case 3:
            book = new ReligiousBook();
            break;
        default:
            cout << "Invalid choice. Try again.\n";
            return;
        }

        book->readData();
        if (booksCount == booksCapacity) {
            resizeBooksArray();
        }
        books[booksCount++] = book;
        cout << "Book added successfully.\n";
    }

    void addCustomer()
    {
        // cout << "Enter Name, Address, and Phone (comma-separated): ";
        // string details;
        // getline(cin, details);

        if (customersCount == customersCapacity) {
            resizeCustomersArray();
        }
        customers[customersCount++].readData();
        cout << "Customer added successfully.\n";
    }

    void displayBooks() const
    {
        for (int i = 0; i < booksCount; ++i)
        {
            books[i]->display();
            cout << endl;
        }
    }

    void searchBook(const string &searchTerm) const
    {
        bool found = false;
        for (int i = 0; i < booksCount; ++i)
        {
            if (books[i]->getTitle().find(searchTerm) != string::npos)//------------------------------------------------------------------------
            {
                books[i]->display();
                cout << endl;
                found = true;
            }
        }
        if (!found)
        {
            cout << "No books found matching \"" << searchTerm << "\".\n";
        }
    }

    void displayCustomers() const
    {
        for (int i = 0; i < customersCount; ++i)
        {
            customers[i].display();
            customers[i].displayBorrowedBooks();
            cout << endl;
        }
    }

    void borrowBook()
    {
        string customerName;
        string bookTitle;
        cout << "Enter customer name: ";
        getline(cin, customerName);
        Customer* customer = nullptr;
        for (int i = 0; i < customersCount; ++i) {
            if (customers[i].getDetails().find(customerName) != string::npos) {////////////////////////////////////////////////////////////////////
                customer = &customers[i];
                break;
            }
        }
        if (!customer) {
            cout << "Error: customer not found." << endl;
            return;
        }

        cout << "Enter book title: ";
        getline(cin, bookTitle);
        Book* book = nullptr;
        for (int i = 0; i < booksCount; ++i) {
            if (books[i]->getTitle().find(bookTitle) != string::npos) {
                book = books[i];
                break;
            }
        }
        if (!book) {
            cout << "Error: book not found." << endl;
            return;
        }

        customer->borrowBook(book);
    }

    void run()
    {
        int choice;
        do
        {
            cout << "\nLibrary Management System:\n1. Add Book\n2. Add Customer\n3. Display Books\n4. Search Books\n5. Display Customers\n6. Borrow Book\n7. Exit\nEnter Choice: ";
            cin >> choice;
            cin.ignore();

            switch (choice)
            {
            case 1:
                addBook();
                break;
            case 2:
                addCustomer();
                break;
            case 3:
                displayBooks();
                break;
            case 4:
            {
                cout << "Enter TItle of the book : ";
                string searchTerm;
                getline(cin, searchTerm);
                searchBook(searchTerm);
                break;
            }
            case 5:
                displayCustomers();
                break;
            case 6:
                borrowBook();
                break;
            case 7:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 7);
    }
};

int main()
{
    Library library;
    library.run();
    return 0;
}