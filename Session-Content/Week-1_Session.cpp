#include <iostream>
using namespace std;


class Person
{
private:
    int id;
    string name;
    string phoneNumber;
    int age;

public:

    // Getters
    int getId() { return id; }
    string getName()  { return name; }
    string getPhoneNumber() { return phoneNumber; }
    int getAge() { return age; }

    // Setters
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setPhoneNumber(string phoneNumber) { this->phoneNumber = phoneNumber; }
    void setAge(int age) { this->age = age; }

    // Display method
    void display() {
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Phone Number: " << phoneNumber << "\n";
        cout << "Age: " << age << "\n";
    }
};

class People {
private:
    static const int capacity = 5;
    Person Students[capacity];
    int count_students = 0;


public:
    void add_stu()
    {
        if(count_students < capacity)
        {
            int temp;
            cout << "Enter student id..";
            cin >> temp;
            Students[count_students].setId(temp);
            count_students++;
        }
        else cout << "capacity is full" << endl;




    }

    void addStudent(Person& s)
    {
        Students[count_students] = s;
        count_students++;
    }

    void editStudent(int index)
    {

    }

    void display()
    {
        for (int i=0; i<count_students; i++)
        {
            Students[i].display();
        }

    }

};


void add()
{

}
int main()
{

    string arr[5];
    //add

    People p;
    //1-add
    //2-edit

    do{
         int option;
        cout << "select option..." << endl;
        cout << "1-add" << endl << "2-edit" << endl << "0-esc";
        cin >> option;

        switch(option)
        {
            //add
            case 1:
                p.addStudent();
                break;
            case 2:
                p.editStudent();
                break;
            case 0:
                return 0;

            default:
                cout << "error" << endl << "select true option" << endl;
        }



    }while()


    /*
    Person stu;
    stu.setId(1);
    stu.setName("Abdulrahman Ahmed");
    stu.setPhoneNumber("01143685049");
    stu.setAge(20);

    p.addStudent(stu);

    p.display();
    */
    return 0;
}