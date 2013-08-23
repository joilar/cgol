
#include <iostream>
#include <typeinfo>

#define FUNCTION_NOT_IMPLEMENTED_MESSAGE \
    std::cerr   << "Function " << __func__ << " not implemented in class " \
                << typeid(*this).name() << "." << std::endl;

