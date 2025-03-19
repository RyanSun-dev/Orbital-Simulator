#ifndef BODY_H
#define BODY_H

#include <Eigen/Dense>
#include <string>

class Body{
    public:
        std::string name;
        double mass;                // Mass in kg
        Eigen::Vector3d position    // Position in meters
        Eigen::Vector3d velocity    // Velocity in /s

        // Constructor
        Body(const std::string& name, double mass, Eigen::Vector3d& pos, Eigen::Vector3d& vel):
        name(name), mass(mass), position(pos), velocity(vel) {}

        // Compute gravitational force exerted by another body
        Eigen::Vector3d computeGravitationalForce(const Body& other) const;
};

#endif