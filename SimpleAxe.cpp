/* 
 * File:   SimpleAxe.h
 * Author: Mark Walker <mtw14@my.fsu.edu>
 *
 * Created on October 11, 2017, 2:20 PM
 */
 
 #include "SimpleAxe.h"
 
 double SimpleAxe::hit(double armor)
 {
	 double damage;
	 
	 if (armor > 0 && armor < 20)
		 damage = hitPoints;
	 else
		 damage = hitPoints - armor;
	 
	 return damage;
 }