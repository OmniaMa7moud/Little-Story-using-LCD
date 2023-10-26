/*
 * main.c
 *
 * Created: 10/20/2023 11:49:57 AM
 *  Author: omnia
 */ 
#define F_CPU 8000000UL
#include "..\MCAL\DIO\DIO.h"
#include <util/delay.h>
#include "../HAL/LCD/LCD.h"


void storyTell()
{
	LCD_instruction(0x40);
	_delay_ms(3);
	//Human Parts
	//Part1
	LCD_write_char(0b00000000);
	LCD_write_char(0b00000011);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00001000);
	LCD_write_char(0b00001000);
	LCD_write_char(0b00001000);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00000011);
	
	//Part2
	LCD_write_char(0b00000000);
	LCD_write_char(0b00011000);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00000010);
	LCD_write_char(0b00000010);
	LCD_write_char(0b00000010);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00011000);
	
	//Part3
	LCD_write_char(0b00000011);
	LCD_write_char(0b00000101);
	LCD_write_char(0b00001001);
	LCD_write_char(0b00000001);
	LCD_write_char(0b00000001);
	LCD_write_char(0b00000010);
	LCD_write_char(0b00000010);
	LCD_write_char(0b00000010);
	
	//Part4
	LCD_write_char(0b00011000);
	LCD_write_char(0b00010100);
	LCD_write_char(0b00010010);
	LCD_write_char(0b00010000);
	LCD_write_char(0b00010000);
	LCD_write_char(0b00001000);
	LCD_write_char(0b00001000);
	LCD_write_char(0b00001000);
	
	
	//Sad Emogy
	//Part1 (4)
	LCD_write_char(0b00000100);
	LCD_write_char(0b00001110);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00000001);
	LCD_write_char(0b00000010);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00000100);
	//Part2 (5)
	LCD_write_char(0b00000100);
	LCD_write_char(0b00001110);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00010000);
	LCD_write_char(0b00001000);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00000100);
	LCD_write_char(0b00000100);
	
	
	
	LCD_MOVE_CURSOR(1,1);
	LCD_write_char(0);
	LCD_MOVE_CURSOR(1,2);
	LCD_write_char(1);
	LCD_MOVE_CURSOR(2,1);
	LCD_write_char(2);
	LCD_MOVE_CURSOR(2,2);
	LCD_write_char(3);
	
	LCD_MOVE_CURSOR(1,3);
	LCD_SEND_STRING(" Once Lived a man who remained");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING(" unmarried his whole Life.");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("When He was 90 Years Old and Dying,");
	LCD_MOVE_CURSOR(2,19);
	LCD_write_char(4);
	LCD_MOVE_CURSOR(2,20);
	LCD_write_char(5);
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("Some one asked Him: ");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("Why not married this whole Time?");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("Old man replied: I'm not against");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("marriage, but i was searching for");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("The PERFECT woman.");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("Man asked: But yet U couldn't find");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("the perfect woman for U?");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("Tier rolled down from eye of dying man,");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("and said: YES, i did found a PERFECT one.");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING("Man was shocked and asked:");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(2,5);
	LCD_SEND_STRING(" then what happened?");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
	LCD_SEND_STRING(" Old man replied:");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,4);
	LCD_SEND_STRING(" The woman was searching for perfect Hub.");
	_delay_ms(3000);
	LCD_instruction(CLEAR_DISPLAY);
	LCD_MOVE_CURSOR(1,1);
}

int main()
{
	DIO_init();
	LCD_INIT();
	_delay_ms(1000);
	
	
	
	while(1)
	{
		storyTell();
	}
		
}
