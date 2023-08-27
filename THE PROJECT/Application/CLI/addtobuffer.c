/*
 * addtobuffer.c
 *
 *  @brief : Function to add elements into the buffer. Happens until enter key is pressed. Elemnts added intpo Rx_Buffer_1.
 * 			 The Rx_Over_Flag becomes high when reception is complete. 
 * @params : a. Rx_Temp_String: Char element entered in command line.
 *  @author: Aswin Sankar
 *  
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

/*
 *
 *
 *  @brief : After buffer insertion, this function copies elements of buffer 1 to buffer 2 and command parsing takes place here
 *  @params : No parameters involved
 *  @author: Aswin Sankar
 *  
 */

void buff_copy_callback(){
	Rx_Over_Flag = 0 ;

	memcpy(Rx_Buffer_2, Rx_Buffer_1, strlen(Rx_Buffer_1));
	command_parser(Rx_Buffer_2);

	Command_Reception_idx = 0;

	memset(Rx_Buffer_1, 0, sizeof(Rx_Buffer_1));
	memset(Rx_Buffer_2, 0, sizeof(Rx_Buffer_2));

	CommandLineInterface();
}

/*
 * 
 *  @brief : Function to return the Rx_Over_Flag. 
 * @params : No params involved
 *  @author: Aswin Sankar
 *  
 */

int get_Rx_Over_Flag(){
	return Rx_Over_Flag;
}
