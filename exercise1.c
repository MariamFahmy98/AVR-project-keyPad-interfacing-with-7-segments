/*
 * exercise1.c
 *
 *  Created on: Sep 18, 2019
 *      Author: marim
 */
#include "keypad.h"
int main(void){
	DDRC |= 0x0f;
	PORTC &= 0xf0;
	uint8 numValue;
	while(1){
		numValue=Keypad_getPressedkey();
		if(numValue>=0 && numValue<=9){
		PORTC= (PORTC & 0xf0) | (numValue & 0x0f);
		}
	}
}
