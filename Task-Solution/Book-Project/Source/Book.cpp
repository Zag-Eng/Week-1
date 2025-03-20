#include "Book.h"

int Book::getId() { return Id; }
string Book::getAuthor() { return Author; }
string Book::getTitle() { return Title; }
int Book::getYear() {return Year;}
bool Book::getAvailable() {return Available;}
double Book::getPrice() { return Price;}

void Book::setId(int id) { Id = id; }
void Book::setAuthor(string A) { Author = A; }
void Book::setTitle(string T) { Title = T; }
void Book::setYear(int Y) {Year = Y;}
void Book::setAvailable(bool Av) {Available = Av;}
void Book::setPrice(double P) {Price = P;}

void Book::Display(){
    cout << "ID : " << Id << endl;
    cout << "Author : " << Author << endl;
    cout << "Title : " << Title << endl;
    cout << "Year : " << Year << endl;
    cout << "Price : " << Price << endl;
    cout << "Available : " << (Available ? "Yes" : "No") << "\n\n";
    cout << "---------------------------------\n\n";
}
