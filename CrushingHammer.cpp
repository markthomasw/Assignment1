/* 
 * File:   CrushingHammer.cpp
 * Author: Mark Walker <mtw14@my.fsu.edu>
 *
 * Created on October 11, 2017, 2:20 PM
 */
 
 #include "CrushingHammer.h"
 
 double CrushingHammer::hit(double armor)
 {
	 double damage;
	 
	 //20% chance to ignore all armor
	 if (rand() % 5 == 0)
		damage = hitPoints;
	
	//20% chance to miss
	else if (rand() % 5 == 1)
		damage = 0;
		
	else
		damage = hitPoints - armor;
 }