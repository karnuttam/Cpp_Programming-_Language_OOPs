/**📘 Definition:
Multipath Inheritance is a type of inheritance in which a class is derived from two or more classes that themselves are derived from a common base class. This creates multiple paths to inherit members from the base class, which can lead to ambiguity.
To resolve this ambiguity, virtual inheritance is used so that the base class is inherited only once.**/

/*
//Without virtual inheritance
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A method" << endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    // obj.show();  ❌ Error: Ambiguity
    obj.B::show();  // ✅ Solution using scope resolution
    obj.C::show();  // ✅ Both A copies

    return 0;
}
**/

//Using virtual inheritance
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A method" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.show();  // ✅ No ambiguity
    return 0;
}
