#include "cheesepizza.h"

CheesePizza::CheesePizza()
{
    name = "Cheese Pizza";
    dough = "Regular Crust";
    sauce = "Mayoneez Sauce";
    toppings ->append("Cheddar");
    toppings ->append("Parmesan");
    toppings ->append("Mozzarella");
}
