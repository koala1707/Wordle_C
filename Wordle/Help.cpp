#include "Help.h"

Help::Help()
{
    const char *help = "Guess the WERDLE in six tries.\n\n\
Each guess must be a five-letter word. Hit the enter button to submit.\n\n\
Examples\n\
[A] P P L E\n\
The letter A is in the correct position.\n\
D |E| A L T\n\
The letter E is in the word but in the wrong position.\n\n";

    printf("%s", help);
}

Help::~Help()
{
}
