#include <iostream>
using std::string;

//contract
class AbstractEmployee {
    virtual void AskForPermission() = 0; // makes the function as mandatory
};

class Employee:AbstractEmployee {
private:
    string Name;
    int Id;
    int Age;

public:
    // getters and setters:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setId(int id) {
        Id = id;
    }
    int getId() {
        return Id;
    }
    void setAge(int age) {
        if (age>=18)
            Age = age;
    }
    int getAge() {
        return Age;
    }

    void Introduction() {
        std::cout << "My name is" << Name << "I am " << Age<< "years old" << std::endl;
    };

    Employee(string name, int id, int age) {
        Age = age;
        Name = name;
        Id = id;
    }
    void AskForPermission() {
        if (Age>=30)
            std::cout<<Name<<"got promoted";
        else {
            std::cout<<"Sorry";
        }
    }
};


int main() {

    Employee employee1 = Employee("Abhyduaya", 2112, 18);
    employee1.setAge(10);
    employee1.Introduction();

    employee1.AskForPermission();

    return 0;
}