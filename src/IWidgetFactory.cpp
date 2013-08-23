
#include "IWidgetFactory.h"
#include "Messages.h"

using namespace cgol;

IWidgetFactory::~IWidgetFactory () {}

std::unique_ptr<IButton> IWidgetFactory::CreateButton () {
    FUNCTION_NOT_IMPLEMENTED_MESSAGE;
    return std::unique_ptr<IButton>(new IButton());
}

std::unique_ptr<ILabel> IWidgetFactory::CreateLabel () {
    FUNCTION_NOT_IMPLEMENTED_MESSAGE;
    return std::unique_ptr<ILabel>(new ILabel());
}

std::unique_ptr<ITextField> IWidgetFactory::CreateTextField () {
    FUNCTION_NOT_IMPLEMENTED_MESSAGE;
    return std::unique_ptr<ITextField>(new ITextField());
}

std::unique_ptr<IWindow> IWidgetFactory::CreateWindow () {
    FUNCTION_NOT_IMPLEMENTED_MESSAGE;
    return std::unique_ptr<IWindow>(new IWindow());
}

