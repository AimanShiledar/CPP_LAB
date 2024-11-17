#include <iostream>
using namespace std;
//  writing base class
class Student {
public:
// Virtual function for run-time polymorphism
virtual void grades() {
cout << "This is grades of students" << endl;
}
};
// Derived class for the  female students
class female : public Student {
public:
void grades() override { // Override the sound function for female
cout << "20 female student passed" << endl;
}
};
// Derived class for male student
class Male : public Student {
public:
void grades() override { // Override the sound function for male
cout << "30 male students passed" << endl;
}
};
// Example of compile-time polymorphism through function overloading
void display(int n) {
cout << "Integer: " << n << endl;
}
void display(double d) {
cout << "Double: " << d << endl;
}

int main() {
// Run-time polymorphism with virtual functions
Student *student1 = new female();
Student *student2 = new Male();
student1->grades(); // Output: 20 female students passed.
student2->grades(); // Output: 30 male students passed.
// Compile-time polymorphism with function overloading
display(8); // Output: Integer: 8
display(9.87); // Output: Double: 9.87
// Clean up
delete student1;
delete student2;
return 0;
}