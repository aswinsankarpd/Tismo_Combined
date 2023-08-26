#include "addtobuffer.h"
#include <string.h>
#include "usart_handler.h"
#include "check_command.h"
static int Receptionidx = 0;
char Rx_data1[10];
char Rx_data2[10];



void addtobuffer(char *str){
	if ((str[0] != '\r') && (str[0] != '\n')) {
			Rx_data1[Receptionidx] = str[0];
			Receptionidx++;
		}
	else
		{
			memcpy(Rx_data2, Rx_data1, strlen(Rx_data1));
			check_command(Rx_data2);
			Receptionidx = 0;
			memset(Rx_data1, 0, sizeof(Rx_data1));
			memset(Rx_data2, 0, sizeof(Rx_data2));
		}
	Receive_Interrupt();
}
