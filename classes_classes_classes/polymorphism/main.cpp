#include <iostream>

class Parent
{
    public:
        void functionParent();
};

class Child : public Parent
{
    public:
        void functionChild();
};

void Parent::functionParent()
{
    std::cout << "Executing member function of class Parent." << std::endl;
}

void Child::functionChild()
{
    std::cout << "Executing member function of class Child." << std::endl;
}

void p_genericFunction(Parent* ptr)
{
    std::cout << "Executing generic function that takes pointer to an object of type Parent." << std::endl;
}

void p_p_genericFunction(Parent** ptr)
{
    std::cout << "Executing generic function that takes pointer to a pointer to type Parent." << std::endl;
}

int main(int argc, char* argv[])
{
    Parent Parent_1;
    Child Child_1;

    Parent_1.functionParent();
    Child_1.functionChild();

    // Polymorphism example #1
    Child_1.functionParent();

    // Does not work, because inheritance works from top to bottom. Derived classes can access base class's member functions but not the other way round
    // Parent_1.functionChild();

    Parent* p1_Parent;
    Child* p1_Child;

    p1_Parent->functionParent();

    // Polymorphism example #2
    p_genericFunction(p1_Parent);
    p_genericFunction(p1_Child);

    // Polymorphism example #3
    p1_Child->functionChild();
    p1_Child->functionParent();

    Parent** p2_Parent;
    p_p_genericFunction(p2_Parent);

    Child** p2_Child;
    // The following issues a compiler error.
    // p_p_genericFunction(p2_Child);

    // Polymorphism example #4
    Parent* p3_Parent = new Child;
    p_genericFunction(p3_Parent);
    p3_Parent->functionParent();

    // This is not possible because the pointer points to object of type Parent. So only the member functions inside parent class are accessible. But one can perform static cast
    // p3_Parent->functionChild();
    static_cast<Child*>(p3_Parent)->functionChild();   

    return EXIT_SUCCESS;
}