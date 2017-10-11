/* 
 * File:   CrazyRandomSword.cpp
 * Author: Mark Walker <mtw14@my.fsu.edu>
 *
 * Created on October 11, 2017, 2:20 PM
 */
 
 #include "CrazyRandomSword.h"
 
 double CrazyRandomSword::hit(double armor)
 {
	 double damage;
	 int halfArmor = armor/2 + 1;
	 halfArmor = rand() % halfArmor;
	 
	 damage = hitpoints - (armor - halfArmor);
	 
	 return damage;
 }