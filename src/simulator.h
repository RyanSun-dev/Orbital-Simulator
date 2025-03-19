#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "body.h"
#include "integrator.h"
#include <vector>

class Simulator{
public:
    std::vector<Body> bodies;
    double timeStep; // Time step in seconds

    // Constructor
    Simulator(double dt) : timeStep(dt) {};

    // Add a celestial body to simulation
    void addBody(const Body& body) {
        bodies.push_back(body);
    }

    // Run a single simulation step
    void step();

};

#endif