/*
 * addtobuffer.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */
#include "addtobuffer.h"

static int Command_Reception_idx = 0;
char Rx_Buffer_1[10];
char Rx_Buffer_2[10];
static int Rx_Over_Flag = 0;

void addtobuffer(char *Rx_Temp_String){

	if ((Rx_Temp_String[0] != '\r') && (Rx_Temp_String[0] != '\n')) {
		Rx_Buffer_1[Command_Reception_idx] = Rx_Temp_String[0];
			Command_Reception_idx++;
			CommandLineInterface();
		}

	else
	{
		Rx_Over_Flag = 1;
	}

}

void buff_copy_callback(){
	Rx_Over_Flag = 0 ;

	memcpy(Rx_Buffer_2, Rx_Buffer_1, strlen(Rx_Buffer_1));
	command_parser(Rx_Buffer_2);

	Command_Reception_idx = 0;

	memset(Rx_Buffer_1, 0, sizeof(Rx_Buffer_1));
	memset(Rx_Buffer_2, 0, sizeof(Rx_Buffer_2));

	CommandLineInterface();
}

int get_Rx_Over_Flag(){
	return Rx_Over_Flag;
}
