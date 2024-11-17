#include <iostream>
using namespace std;
// Base class
class Flower {
public:
Flower() {
cout << "Flower planted." << endl;
}
void start() {
cout << "Folwer started to bloom." << endl;
}
};
// Derived class
class rose : public Flower {
public:
rose() {
cout << "Rose planted." << endl;
}
void bloom() {
cout << "Rose blooming: bloom! bloom!" << endl;
}
};
int main() {
// Creating an object of the derived class
rose myrose;
// Accessing base class method
myrose.start(); // Output: Vehicle has started.
// Accessing derived class method
myrose.bloom(); // Output: Car honking: Beep Beep!
return 0;
}