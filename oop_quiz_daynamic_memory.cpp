//////////////////////////////library management
#include <iostream>
using namespace std;

class Book{
    private:
    string Title;
    string Author;
    int year;
    public:
    Book(string x=" ",string y=" ",int z=0) : Title(x),Author(y),year(z){}

    void displayBook(){
        cout<<"title of the book"<<Title<<endl;
        cout<<"author of the book"<<Author<<endl;
        cout<<"year of publish :"<<year<<endl;
    }
    string get_title(){
        return Title;
    }
};

class Library
{
    private:
    int capacity;
    int count;
    Book* array;
    public:
    Library(int capacity){
        count=0;
        this->capacity=capacity;
        array=new Book[capacity];
    }
    void addBook(Book obj){
        if(count<capacity){
            array[count]=obj;
        }
        else{
            cout<< "the library is full there is no space left "<<endl;
        }
    }
    void removeBook(string title){
        for(int i=0 ; i<count ;i++ ){
            if(array[i].get_title()==title){
                for(int j=i ; j<count-1 ;j++){
                    array[j]=array[j + 1];
                }
            }
            else{
                cout<<"the book doesnt exist in the library"<<endl;
            }
        }

    }
       void displayBooks() const {
        if (count == 0) {
            cout << "No books in the library." << endl;
            return;
        }
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". ";
            array[i].displayBook();
        }
    }

    ~Library(){
        delete[] array;
    }     


};

int main(){
   int capacity;
    cout << "Enter the maximum number of books the library can hold: ";
    cin >> capacity;

    Library library(capacity);

    int choice;
    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. displayBook\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string title, author;
            int year;
            cout << "Enter title: ";
            cin.ignore(); // To ignore leftover newline character
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter publication year: ";
            cin >> year;
            Book book(title, author, year);
            library.addBook(book);
            break;
        }
        case 2: {
            string title;
            cout << "Enter title of the book to remove: ";
            cin.ignore(); // To ignore leftover newline character
            getline(cin, title);
            library.removeBook(title);
            break;
        }
        case 3:
            library.displayBooks();
            break;
        case 4:
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
    

}