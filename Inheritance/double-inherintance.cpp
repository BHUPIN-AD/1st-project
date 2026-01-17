#include <iostream>
using namespace std;

// First base class
class Father {
public:
    void work() {
        cout << "Father is working" << endl;
    }
};

// Second base class
class Mother {
public:
    void care() {
        cout << "Mother is caring" << endl;
    }
};

// Derived class (double inheritance)
class Child : public Father, public Mother {
public:
    void study() {
        cout << "Child is studying" << endl;
    }
};

int main() {
    Child c;
    c.work();   // from Father
    c.care();   // from Mother
    c.study();  // own function
    return 0;
}
