#pragma once

#include "unit_t.hpp"

namespace sakurajin{
    namespace unit_system{
        namespace base{
            class length : public unit_t<2>{
            public:
                length();
                length(unit_t<2> val);
                explicit length(long double val);
                length(long double val, long double mult);
                
            };

            inline namespace literals{
                length operator "" _km(long double len);
                length operator "" _m(long double len);
                length operator "" _dm(long double len);
                length operator "" _cm(long double len);
                length operator "" _mm(long double len);
                length operator "" _um(long double len);
                length operator "" _nm(long double len);
                
                length operator "" _km(unsigned long long int len);
                length operator "" _m(unsigned long long int len);
                length operator "" _dm(unsigned long long int len);
                length operator "" _cm(unsigned long long int len);
                length operator "" _mm(unsigned long long int len);
                length operator "" _um(unsigned long long int len);
                length operator "" _nm(unsigned long long int len);
            }
            
        }
    }
}
 
