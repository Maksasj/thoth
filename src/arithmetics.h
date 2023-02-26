#ifndef _THOTH_ARITHMETICS_H_
#define _THOTH_ARITHMETICS_H_

#include <exception>
#include <iostream>

#define _THOTH_CONSTANT_PI_  3.14159265359
#define _THOTH_CONSTANT_E_   2.71828182845

#define _THOTH_SQRT_ITERATION_COUNT_ 1000
#define _THOTH_LN_ITERATION_COUNT_ 1000
#define _THOTH_SIN_ITERATION_COUNT_ 20

#define _THOTH_ERROR_ 0.0000000000001

namespace thoth {
    namespace Math {
        static inline double abs(double number) {
            if(number < 0)
                return (-1.0) * number;

            return number;
        }

        // Only unsigned integer power
        static inline double upow(double number, unsigned int power) {
            if(power == 0) return 1.0;
            if(power == 1) return number;

            double initial = number;

            for(int i = 2; i <= power; ++i) 
                number *= initial;

            return number;
        }

        static inline double uroot(double number, unsigned int base) {
            double answ = 0.0;

            double bottomBound = 0;
            double topBound = number;

            for(int i = 0; i < _THOTH_SQRT_ITERATION_COUNT_; ++i) {
                answ = ((topBound - bottomBound) / 2.0) + bottomBound;
                double tmpPower = upow(answ, base);

                if(tmpPower < number) {
                    bottomBound = answ;
                } else if(tmpPower > number) {
                    topBound = answ;
                } else return answ;
            }

            return answ;
        };

        static inline double sqrt(double number) {
            if(number < 0) throw std::invalid_argument("thoth::Math::qsrt goth negative number as an argument");

            return uroot(number, 2);
        }

        //Quake fast inverse sqrt algorithm 
        static inline double qsqrt(double number) {
            if(number < 0) throw std::invalid_argument("thoth::Math::qsrt goth negative number as an argument");

            long i;
            float x2, y;
            const float threehalfs = 1.5F;

            x2 = number * 0.5F;
            y  = number;
            i  = * ( long * ) &y;                       // evil floating point bit level hacking
            i  = 0x5f3759df - ( i >> 1 );               // what the fuck? 
            y  = * ( float * ) &i;
            y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
            //	y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

            return y;
        };

        static inline double exp(double expo) {
            if(expo == 0) return 1.0;
            int n = 0; double sum = 0.0, x1 = 1;
            
            do {
                sum += x1;
                x1 *= (expo/++n);
            } while(x1 > _THOTH_ERROR_);

            return sum;
        }

        static inline double ln(double number) {
            if(number == 0) throw std::invalid_argument("thoth::Math::ln goth 0 as an argument");

            double answ = 0.0;

            double bottomBound = 0;
            double topBound = number;

            for(int i = 0; i < _THOTH_LN_ITERATION_COUNT_; ++i) {
                answ = ((topBound - bottomBound) / 2.0) + bottomBound;
                double tmpPower = exp(answ);

                if(tmpPower < number) {
                    bottomBound = answ;
                } else if(tmpPower > number) {
                    topBound = answ;
                } else return answ;
            }

            return answ;
        }
        
        static inline double fpow(double number, double expo) {
            return exp(expo * ln(number));
        }

        static inline double sin(double number) {
            int circles = number / (_THOTH_CONSTANT_PI_ * 2);
            std::cout << circles << "\n";
            number -= circles * (_THOTH_CONSTANT_PI_ * 2);

            double term = number, sinx = term, denominator;
            
            for(int n = 1; n < _THOTH_SIN_ITERATION_COUNT_; ++n) {
                double denominator = 2 * n * (2 * n + 1);
                term = -term * number * number / denominator;
                sinx = sinx + term;
            }

            return sinx;
        }

        static inline double cos(double number) {
            return sin((_THOTH_CONSTANT_PI_ / 2.0) - number);
        }
    }
}

#endif