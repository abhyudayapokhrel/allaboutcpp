#include <iostream>
using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void Introduction() {
        std::cout << "My name is " << Name << std::endl;
    };

    // constructors:
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {

    Employee employee1 = Employee("Abhyudaya", "someRandom", 18);
    employee1.Introduction();
    Employee employee2 = Employee("Ram", "Amazon", 25);
    // employee1.Name = "Abhyudaya";
    // employee1.Company = "Some Random";
    // employee1.Age = 18;
    // employee1.Introduction();



    return 0;
}