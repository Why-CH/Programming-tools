#include <iostream>
#include "Tour.h"
#include "Booking.h"

int main() {
    Tour paris("Paris Highlights", 7, 1200.0);

    Booking booking(paris, 2);

    std::cout << "Tour: " << booking.tour().name() << " (" << booking.tour().days() << " days)\n";
    std::cout << "People: " << booking.numPeople() << "\n";

    double base = booking.totalCost();
    double withTax = booking.totalCostWithTax(0.1);

    std::cout << "Base cost: $" << base << "\n";
    std::cout << "Cost with 10% tax: $" << withTax << "\n";

    return 0;
}
