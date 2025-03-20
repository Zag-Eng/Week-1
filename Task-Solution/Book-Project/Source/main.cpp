#include <iostream>
#include "Book.h"
using namespace std;
int main()
{
    Book arr[3];
    for (int i = 0; i < 3; i++) 
    { 
        int id;
        string author;
        string title;
        int year;
        bool available;
        double price;
        cout << "Enter ID, Author, Title, Year, Price and Availablity (1 for Yes, 0 for No) For Book [" << i + 1 << "]" << endl;
        cin >> id >> author >> title >> year >> price >> available;
        arr[i].setId(id);
        arr[i].setAuthor(author);
        arr[i].setTitle(title);
        arr[i].setYear(year);
        arr[i].setPrice(price);
        arr[i].setAvailable(available);
        cout << "\n--------------------------------------------------------\n\n";
    }
    for (int i = 0; i < 3; i++) {
        cout << "Information of Book [" << i + 1 << "]\n\n";
        arr[i].Display();
    }
}
