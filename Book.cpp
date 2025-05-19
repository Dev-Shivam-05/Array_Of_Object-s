#include<iostream>
using namespace std;

class Book{
    private:
        string book_title,book_author;
        int book_price;
    public:
        void setBook(string book_title, string book_author,int book_price)
        {
            this->book_title = book_title;
            this->book_author = book_author;
            this->book_price = book_price;
        }
        void getBook()
        {
            cout << "Title : "<< book_title <<", Author : "<< book_author <<", Price : "<< book_price <<"." << endl;
        }
};

int main()
{
    int size;

    cout << "Enter The Size Of Libary :- ";
    cin >> size;

    Book bk[size];

    string book_title,book_author;
    int book_price;    
    for (int i=0; i<size; i++)
    {
        cout << "Book "<< i+1 <<" :- " << endl;
        cout << "Book Title :- ";
        cin >> book_title;
        cout << "Book Author :- ";
        cin >> book_author;
        cout << "Book Price :- ";
        cin >> book_price;
        cout << endl;
        bk[i].setBook(book_title,book_author,book_price);
    }

    cout << endl << "Detail's Of Book's Are :- " << endl;
    for (int i=0; i<size; i++)
    {
        bk[i].getBook();
    }
    
    return 0;
}