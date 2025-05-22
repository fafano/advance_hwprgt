#include "CurrencySystem.h"
#include <string>

using namespace std;

double Currency::changetocu(curr cu, double sum) {
    if (cu == curr::usd) {
        currency = cu;
        base = sum;
        return base;
    } else if (cu == curr::irr) {
        currency = cu;
        base = sum / 3;
        return base;
    } else if (cu == curr::eur) {
        currency = cu;
        base = sum / 2;
        return base;
    } else {
        throw invalid_argument("This currency is not acceptable!!sorry.");
    }
}
double Currency::getbace() const { return base; }

Usd::Usd(int am) {
    among = am;
    base += among * 1;
    currency = usd;
}

Currency Currency::operator+(const Usd& other) const {
    Usd result;
    result.base = this->base + other.base;
    return result;
}

Currency Currency::operator-(const Usd& other) const {
    Usd result;
    result.base = this->base - other.base;
    return result;
}


Eur::Eur(int am) {
    among = am;
    base += among * 2;
    currency = eur;
}



Irr::Irr(int am) {
    among = am;
    base += among * 3;
    currency = irr;
}




bool Currency::operator==(const Usd& other) const {
    return std::abs(base - other.base) < 0.0001f; 
}

bool Currency::operator!=(const Usd& other) const {
    return !(*this == other);
}

bool Currency::operator<(const Usd& other) const {
    return base < other.base;
}

bool Currency::operator>(const Usd& other) const {
    return base > other.base;
}