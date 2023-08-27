
#include "Command_Parser.h"

typedef struct {
    const char *command;
    const char *sub_command;
    void (*function)(int);
} CommandMap;


CommandMap commandTable[] = {
    { "LED","ON",LED_ON },
    { "LED","OFF",LED_OFF },
    { "CBUFF",NULL,cbuff_main },
	{ "ADC",NULL,adc_main},
	{ "SET","STIM",softtimer}
};

char message[MESSAGE_SIZE];
char *command;
char *sub_command;
char *value;
static int cbuff_flag = 0;

/*
 * 
 * @brief : Takes the cli command as input. Tokenises it and divies into command, subcommand and function argument.
 *          The function argument is passes when the function in the lookup table is called.    
 * @params : a. Command_String: The cli command which is passed from buff_copy_callback.
 * @author: Aswin Sankar
 *  
 */

void command_parser(char *Command_String){
    command = strtok(Command_String, "_");
    sub_command = strtok(NULL, "_");
    value = strtok(NULL,"_");
    int value_param = 0;
    int numCommands = sizeof(commandTable) / sizeof(commandTable[0]);


    for (int i = 0; i < numCommands; i++) {
           if ((strcmp(command, commandTable[i].command) == 0) && (strcmp(sub_command,commandTable[i].sub_command) == 0)) {
               if (value != NULL) {
				   value_param = atoi(value);
				   commandTable[i].function(value_param);
				   sprintf(message,"COMMAND IS : %s",command);
				   Tx_UART(message);
               	   }
               else{
					value_param = atoi(value);
					commandTable[i].function(value_param);
					cbuff_flag = 1;
					sprintf(message,"COMMAND IS : %s",command);
					Tx_UART(message);
               }
               break;
           }
       }
}

/*
 * 
 * @brief : CBUFF requires another buffer to be entered into but uses the same callback as cli. So cbuff_flag helps the control to decide
 *          whihc buffer the data should go to.   
 * @params : No Params involved.
 * @author: Aswin Sankar
 *  
 */

int get_cbuff_flag(){
	return cbuff_flag;
}
