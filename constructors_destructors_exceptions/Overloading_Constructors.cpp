#include <iostream>
#include <string>

class Student
{
    private:
        std::string Name;
        int Roll_Number;

    public:
        std::string GetName();
        int GetRollNumber();

        // Overloading Constructor
        Student(std::string student_name, int student_number);
        Student(std::string student_name);
};

std::string Student::GetName()
{
    return Name;
}

int Student::GetRollNumber()
{
    return Roll_Number;
}

Student::Student(std::string student_name, int student_number)
{
    Name = student_name;
    Roll_Number = student_number;
}

Student::Student(std::string student_name)
{
    Name = student_name;
    Roll_Number = 0;
}

int main(int argc, char* argv[])
{
    Student student_1("Draymond Green", 32);
    Student student_2("Bob Dingleberry");

    std::cout << "The name of 1st student is: " << student_1.GetName() << std::endl;
    std::cout << "The name of 2nd student is: " << student_2.GetName() << std::endl;
    std::cout << "The roll number of 1st student is: " << student_1.GetRollNumber() << std::endl;
    std::cout << "The roll number of 2nd student is: " << student_2.GetRollNumber() << std::endl;
    
    return EXIT_SUCCESS;
}