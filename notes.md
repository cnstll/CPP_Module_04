# Notes on day 4 CPP
# Definition: Method
A Method is a member function which class scope is evaluated at runtime. The keyword "virtual" is used so the compiler can set a virtual table for functions binding. Function resolution is done to the most derived class that exists between the base class and the derived classes, that's called polymorphism
[Source on virtual functions and polymorphism](https://www.learncpp.com/cpp-tutorial/virtual-functions/)
[Virtual Destructor, assignement and overriding](https://www.learncpp.com/cpp-tutorial/virtual-destructors-virtual-assignment-and-overriding-virtualization/)
# Definition: Pure virtual function and Abstract Class
A pure virtual function is a virtual member function for which a value of ```0``` has been assigned in headers (and/or for which no body has been defined). This function is essentially a placeholder in a parent class so that derived class should define an appropriate behaviour for the function.
If one or more functions in a class is designed as a pure function, this class becomes an Abstract class. As a consequence this class cannot be instantiated.
# Definition: Interface class
An interface class is a class that has no member variables and where all member functions are pure virtual functions.
Interface classes leave the specifics of implementation entirely up to derived classes.
[Pure virtual functions, Abstract classes and Interfaces](https://www.learncpp.com/cpp-tutorial/pure-virtual-functions-abstract-base-classes-and-interface-classes/)