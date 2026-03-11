#include "Booking.h"

Booking::Booking(const Tour& tour, int numPeople)
    : m_tour(tour), m_numPeople(numPeople) {}

const Tour& Booking::tour() const { return m_tour; }
int Booking::numPeople() const { return m_numPeople; }

double Booking::totalCost() const {
    return m_tour.pricePerPerson() * static_cast<double>(m_numPeople);
}

double Booking::totalCostWithTax(double taxRate) const {
    double base = totalCost();
    return base * (1.0 + taxRate);
}
