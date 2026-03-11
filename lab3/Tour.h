#ifndef TOUR_H
#define TOUR_H

#include <string>

class Tour {
public:
    Tour(const std::string& name, int days, double pricePerPerson);

    const std::string& name() const;
    int days() const;
    double pricePerPerson() const;

private:
    std::string m_name;
    int m_days;
    double m_pricePerPerson;
};

#endif // TOUR_H
