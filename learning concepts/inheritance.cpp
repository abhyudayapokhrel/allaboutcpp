#include <iostream>
using std::string;

//contract
class AbstractEmployee {
    virtual void AskForPermission() = 0; // makes the function as mandatory
};

class Employee:AbstractEmployee {
private:

    int Id;
    int Age;

protected:
    string Name;

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

class Developer:public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, int id, int age, string favProgrammingLanguage)
        : Employee(name, id, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug() {
        std::cout << getName() << " fixed bug using " << FavProgrammingLanguage;
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage;
    }
};


int main() {

    // Employee employee1 = Employee("Abhyduaya", 2112, 18);
    // employee1.setAge(10);
    // employee1.Introduction();

    // employee1.AskForPermission();

    Developer developer1 = Developer("Abhydaya", 2112, 18, "javaScript");
    developer1.fixBug();

    return 0;
}