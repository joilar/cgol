
#ifndef IWIDGETFACTORY_H
#define IWIDGETFACTORY_H

#include <memory>
#include "IButton.h"
#include "ILabel.h"
#include "ITextField.h"
#include "IWindow.h"

namespace cgol {
    class IWidgetFactory;
}

class cgol::IWidgetFactory {
    public:
        virtual                                 ~IWidgetFactory ();
        virtual std::unique_ptr<IButton>        CreateButton    ();
        virtual std::unique_ptr<ILabel>         CreateLabel     ();
        virtual std::unique_ptr<ITextField>     CreateTextField ();
        virtual std::unique_ptr<IWindow>        CreateWindow    ();
};

#endif

