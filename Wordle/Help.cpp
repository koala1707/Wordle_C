#include "Help.h"

string Help::option()
{
    string help;
    help = "Guess the WERDLE in six tries.\n"
           "\n"
           "Each guess must be a five-letter word. Hit the enter button to submit.\n"
           "\n"
           "Examples\n"
           "[A] P P L E\n"
           "The letter A is in the correct position.\n"
           "D |E| A L T\n"
           "The letter E is in the word but in the wrong position.";

    return help;
}
