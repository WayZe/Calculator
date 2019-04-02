#ifndef BUTTONFACTORY_H
#define BUTTONFACTORY_H

#include <QObject>

enum ButtonFactories {NumberButtonFactory, ActionButtonFactory};

class ButtonFactory
{
public:
    ButtonFactory();
    //CreateButton();
};

class NumberButtonFactory: public ButtonFactory
{

};

class ActionButtonFactory: public ButtonFactory
{

};

#endif // BUTTONFACTORY_H
