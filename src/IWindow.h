
#ifndef IWINDOW_H
#define IWINDOW_H

namespace cgol {
    class IWindow;
}

class cgol::IWindow {
    public:
        virtual         ~IWindow        ();
        virtual void    SayHello        ();
};

#endif

