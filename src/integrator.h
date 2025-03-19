#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "body.h"
#include <vector>

class Integrator{
    public:
        static void eulerStep(std::vector<Body>& bodies, double dt);
};

#endif