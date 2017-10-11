/* 
 * File:   CrazyRandomSword.h
 * Author: Mark Walker <mtw14@my.fsu.edu>
 *
 * Created on October 11, 2017, 2:20 PM
 */

#include <string>
#include <cstdlib>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = random 
 * int between 10-100) Ignores a random amount of armor between
 * 0 and half of the armor the weapon hits.
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", 0) {
		srand(time(NULL));
		hitPoints = (rand() % 91) + 10;
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */