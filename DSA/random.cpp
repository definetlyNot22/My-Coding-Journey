#include <iostream>
#include <string>

// Define a simple class
class Animal {
public:
    std::string name;
    int age;

    // Constructor
    Animal(std::string animalName, int animalAge) {
        name = animalName;
        age = animalAge;
    }

    // Method to display animal details
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create an object of the class
    Animal dog("Buddy", 5);
    // Display the details of the object
    dog.display();

    return 0;
}
