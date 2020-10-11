#include <QCoreApplication>
#include "pizza.h"
#include "simplepizzafactory.h"
#include "pizzastore.h"
#include "cheesepizza.h"
#include "pepperonipizza.h"
#include "clampizza.h"
#include "veggiepizza.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

     PizzaStore *pStore = new SimplePizzaFactory();

    Pizza *pizza1 = pStore->orderPizza("CheesePizza");
    Pizza *pizza2 = pStore->orderPizza("ClamPizza");
    Pizza *pizza3 = pStore->orderPizza("PepperoniPizza");
    Pizza *pizza4 = pStore->orderPizza("VeggiePizza");
    return a.exec();
}
