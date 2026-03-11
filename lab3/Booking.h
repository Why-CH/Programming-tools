#ifndef BOOKING_H
#define BOOKING_H

#include "Tour.h"

class Booking {
public:
    Booking(const Tour& tour, int numPeople);

    const Tour& tour() const;
    int numPeople() const;

    double totalCost() const;
    double totalCostWithTax(double taxRate) const;

private:
    Tour m_tour;
    int m_numPeople;
};

#endif // BOOKING_H
