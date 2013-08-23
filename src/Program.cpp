
#include <iostream>
#include "Program.h"
#include "IWidgetFactory.h"
#include "IWindow.h"

using namespace cgol;

Program::Program () {
    std::cout << "Instantiating Program." << std::endl;
}

Program::~Program () {
    std::cout << "Destroying Program." << std::endl;
}

int Program::Main ( int argc, char ** argv ) {
    int exit_code = 0;

    std::cout << "Entering Program main." << std::endl;

    IWidgetFactory *widgetFactory = new IWidgetFactory();
    if ( widgetFactory ) {
        std::unique_ptr<IWindow> window = widgetFactory->CreateWindow();
        if ( window ) {
            window->SayHello();
        } else {
            std::cerr << "Failed to instantiate window." << std::endl;
            exit_code = 2;
        }
    } else {
        std::cerr << "Failed to instantiate widget factory." << std::endl;
        exit_code = 1;
    }

    return exit_code;
}

