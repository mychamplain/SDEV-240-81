#include <iostream>
#include "Test.cpp"

using namespace std;

class Parent {
public:
    virtual void welcome(){
        cout << "Parent" << endl;
    }
};
class Child : public Parent {
public:
    void welcome(){
        cout << "Child" << endl;
    }
};
int main() {
    Parent *m = new Child();
    m->welcome();
    return 0;
}

//int main() {
//    // instantiate the class
//    Test test;
//    // call the first function
//    test.function1();
//    // call the second function
//    float num = test.function2();
//    // print out YYY
//    cout << num << endl;
//    // also print out XXX
//    cout << test.getFunction2() << endl;
//    return 0;
//}
