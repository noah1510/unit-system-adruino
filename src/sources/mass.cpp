#include "mass.hpp"
#include "prefix.hpp"

using namespace sakurajin::unit_system::base;
using namespace sakurajin::unit_system::prefix;

mass::mass(): mass(0){}
mass::mass(unit_t<3> val): mass(val.value, val.multiplier){}
mass::mass(long double val): mass(val,1){}
mass::mass(long double val, long double mult): unit_t<3>(val,mult){}

mass literals::operator "" _kg(long double len){
    return mass{len, 1};
}

mass literals::operator "" _g(long double len){
    return mass{len, milli};
}

mass literals::operator "" _mg(long double len){
    return mass{len, micro};
}

mass literals::operator "" _ug(long double len){
    return mass{len, nano};
}

mass literals::operator "" _t(long double len){
    return mass{len, kilo};
}



mass literals::operator "" _kg(unsigned long long int len){
    return mass{static_cast<long double>(len), 1};
}

mass literals::operator "" _g(unsigned long long int len){
    return mass{static_cast<long double>(len), milli};
}

mass literals::operator "" _mg(unsigned long long int len){
    return mass{static_cast<long double>(len), micro};
}

mass literals::operator "" _ug(unsigned long long int len){
    return mass{static_cast<long double>(len), nano};
}

mass literals::operator "" _t(unsigned long long int len){
    return mass{static_cast<long double>(len), kilo};
}

