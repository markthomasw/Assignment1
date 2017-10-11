/* 
 * File:   CrushingHammer.h
 * Author: Mark Walker <mtw14@my.fsu.edu>
 *
 * Created on October 11, 2017, 2:20 PM
 */

#include <string>
#include "Weapon.h"

#ifndef CRUSHINGHAMMER_H
#define CRUSHINGHAMMER_H

/**
 * Defines the behavior of a crushing hammer (hitpoint = 75, Has a 20% 
 * chance to ignore all armor and 20% chance to completely miss)
 */
class CrushingHammer : public Weapon {
public:

    CrushingHammer() : Weapon("Crushing Hammer", 75.0) {
    }
    virtual ~CrushingHammer() {}; 
    virtual double hit(double armor);

};

#endif /* CRUSHINGHAMMER_H */