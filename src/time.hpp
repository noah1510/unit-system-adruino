#pragma once

#include "unit_t.hpp"

namespace sakurajin{
    namespace unit_system{
        namespace base{
            class time_si : public unit_t<1>{
            public:
                time_si();
                time_si(unit_t<1> val);
                explicit time_si(long double val);
                time_si(long double val, long double mult);
                
            };
            
            inline namespace literals{
                time_si operator "" _a(long double len);
                time_si operator "" _d(long double len);
                time_si operator "" _h(long double len);
                time_si operator "" _s(long double len);
                time_si operator "" _ms(long double len);
                time_si operator "" _us(long double len);
                time_si operator "" _ns(long double len);
                time_si operator "" _fs(long double len);
                
                
                time_si operator "" _a(unsigned long long int len);
                time_si operator "" _d(unsigned long long int len);
                time_si operator "" _h(unsigned long long int len);
                time_si operator "" _s(unsigned long long int len);
                time_si operator "" _ms(unsigned long long int len);
                time_si operator "" _us(unsigned long long int len);
                time_si operator "" _ns(unsigned long long int len);
                time_si operator "" _fs(unsigned long long int len);
                
                #ifndef ARDUINO
                    time_si operator "" _min(long double len);
                    time_si operator "" _min(unsigned long long int len);
                #else
                    time_si operator "" _minute(long double len);
                    time_si operator "" _minute(unsigned long long int len);
                #endif
            }
            
        }
    }
}
