#include <iostream>
#include "Pen.hpp"

void Pen::InkLvl(int ink_amt, std::string word)
{
    int char_length = word.length();
    int ink_left = ink_amt - char_length;

    if(ink_left <= 0)
    {
        OutOfInk();
    } else
    {
        std::cout << "You wrote " << char_length << " characters." << std::endl;
        std::cout << "Ink left : " << ink_left << std::endl;
    }
}

void Pen::OutOfInk()
{
    std::cout << "You are out of ink. Find a nearby octopus." << std::endl;
}