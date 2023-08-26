/** @brief: Function to tokenize the command and
 * turn on the corresponding led.
 *  @params: Recieves command buffer as input and tokenizes it
 *  to turn on the corresponding LED.
 *  @author aswinsankar
 */

#include "check_command.h"
#include "led_control.h"

CommandMap commandMap[] = {
    {"LED1", "ON", &LED1_ON},
	{"LED1", "OFF", &LED1_OFF}
};

void check_command(char *str){

    char *command = strtok(str, "_");
    char *cond = strtok(NULL, "_");
//    char *cond = strtok(cond1, "\b");

    for ( int idx = 0; idx < (sizeof(commandMap)/sizeof(commandMap[0])); idx++){
    		if(strcmp(command,commandMap[idx].command) == 0 && strcmp(cond,commandMap[idx].cond) == 0){
    			commandMap[idx].function();
    			            break;
    		}
    }
}
