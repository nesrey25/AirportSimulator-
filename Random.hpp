//
//  Random.hpp
//  AirportSimulator
//
//  Created by Nate Esrey on 4/9/18.
//  Copyright © 2018 Nate Esrey. All rights reserved.
//

#ifndef Random_hpp
#define Random_hpp

#include <stdio.h>
#include <cstdlib>
#include <ctime>

/** Class to encapsulate the standard random number generator. */
class Random {
    
public:
    
    /** Initializes the random number generator using the time
     as the seed.
     */
    Random() {
        srand((unsigned int)std::time(0));
    }
    
    /** Initializes the randon mumber generator using a
     supplied seed.
     */
    Random(int seed) {
        srand(seed);
    }
    
    /** Returns a random integer in the range 0 ñ n. */
    int next_int(int n) {
        return int(next_double() * n);
    }
    
    /** Return a random double in the range 0 ñ 1. */
    double next_double() {
        return double(rand()) / RAND_MAX;
    }
    
};

#endif /* Random_hpp */
