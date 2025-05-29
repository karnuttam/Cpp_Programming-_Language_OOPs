// Inheritance is an Object-Oriented Programming (OOP) concept where one class (child/derived class) inherits the properties and behaviors (data and functions) of another class (parent/base class).

// Inheritance allows a class to acquire the attributes and methods of another class, enabling code reuse, extensibility, and hierarchical classification.

// In C++, access modifiers (public, protected, and private) control the accessibility of base class members in the derived class

// When using inheritance, access modifiers also affect how members of the base class are inherited in the derived class.

/**✅ 1. Access Modifiers (Basics)
Modifier   (Accessible Inside Class)	(Accessible in Derived Class)	(Accessible Outside Class)
public	                ✅ Yes	                ✅ Yes	                     ✅ Yes
protected	            ✅ Yes	                ✅ Yes	                     ❌ No
private	                ✅ Yes	               ❌ No	                        ❌ No
*/

/**
 🔄 Access Modifier Effect in Inheritance:
Base Class Member	              (public Inheritance)      ( protected Inheritance	)       (private Inheritance)
public	                          public in derived	           protected in derived	            private in derived
protected	                     protected in derived	       protected in derived	            private in derived
private	                        ❌ Not inherited	              ❌ Not inherited	               ❌ Not inherited

 */

// Basic syntax
#include <iostream>
// using namespace std;

class Base
{
    // base or parent class members
};

class Derived : public /**(access modifier)*/ Base
{
    // derived or child class members
};
int main()
{

    return 0;
}
