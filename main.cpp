//
//  main.cpp
//  AirportSimulator
//
//  Created by Nate Esrey on 4/6/18.
//  Copyright © 2018 Nate Esrey. All rights reserved.
//

#include "Simulator.hpp"

Simulator airport;

int main() {
    
    airport.enter_data();
    airport.run_simulation();
    airport.show_stats();
    
    return 0;
}
