
#ifndef PROGRAM_H
#define PROGRAM_H

namespace cgol {
    class Program;
}

class cgol::Program {
    public:
                Program          ();
                ~Program         ();
        int     Main            ( int argc, char ** argv );
};

#endif

