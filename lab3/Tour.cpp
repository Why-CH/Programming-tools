#include "Tour.h"

Tour::Tour(const std::string& name, int days, double pricePerPerson)
    : m_name(name), m_days(days), m_pricePerPerson(pricePerPerson) {}

const std::string& Tour::name() const { return m_name; }
int Tour::days() const { return m_days; }
double Tour::pricePerPerson() const { return m_pricePerPerson; }
