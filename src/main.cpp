
#include <config.h>
#include <cstdio>
#include "CGOL.h"

int main ( int argc, char** argv ) {
    int exit_code;
    cgol::CGOL* cgol;

    // TODO: Exception handling on CGOL instantiation.
    cgol = new cgol::CGOL();
    exit_code = cgol->Run( argc, argv );

    delete cgol;

    puts("\nThank you for running package " PACKAGE ".");

    return exit_code;
}
