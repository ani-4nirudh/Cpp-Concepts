#include <iostream>
#include "Pen.hpp"

int main(int argc, char *argv[])
{
    Pen pen_1, pen_2;

    pen_1.AmountOfInk = 80;
    pen_1.CapColor = blue;
    pen_1.InkColor = blue;
    pen_1.Style = gel;

    pen_2.AmountOfInk = 100;
    pen_2.CapColor = black;
    pen_2.InkColor = black;
    pen_2.Style = ballpoint;

    std::string my_string;
    std::cout << "Enter some words of choice: ";
    std::cin >> my_string;

    pen_1.InkLvl(pen_1.AmountOfInk, my_string);
    pen_2.InkLvl(pen_2.AmountOfInk, my_string);
    
    return EXIT_SUCCESS;
}