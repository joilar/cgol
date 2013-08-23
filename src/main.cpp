
#include <config.h>
#include "Program.h"

int main ( int argc, char ** argv ) {
    int exit_code = 0;

    //TODO: Add exception handling.

    cgol::Program program;
    exit_code = program.Main( argc, argv );

    return exit_code;
}

