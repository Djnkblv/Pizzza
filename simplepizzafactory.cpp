#include "simplepizzafactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}
Pizza* SimplePizzaFactory::createPizza(QString type) {
    Pizza *pizza = nullptr;
   if (type == "CheesePizza") {
        pizza = new CheesePizza();

   }else if (type == "Veggie Pizza") {
       pizza = new VeggiePizza();
   }else if (type == "PepperoniPizza") {
       pizza = new PepperoniPizza();
   }else if (type == "ClamPizza") {
       pizza = new ClamPizza();
   }


    return pizza;
}
