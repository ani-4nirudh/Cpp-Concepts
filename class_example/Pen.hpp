#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED

#include <string>

enum PenStyle {ballpoint, gel, felt, fountain};
enum Color {red, green, blue, black, yellow, orange, purple};

class Pen
{
    public:

        // Member Variables
        PenStyle Style;
        Color InkColor;
        Color CapColor;
        int AmountOfInk;

        // Member Functions
        void InkLvl(int ink_amt, std::string word);
        void OutOfInk();
};

#endif