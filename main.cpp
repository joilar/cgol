
#include "cgol.h"

int main ( int argc, char** argv ) {
	int exit_code;
	cgol::CGOL* cgol;

	// TODO: Exception handling on CGOL instantiation.
	cgol = new cgol::CGOL();
	exit_code = cgol->Run( argc, argv );

	delete cgol;

	return exit_code;
}
