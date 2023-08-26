#include "check_command.h"
#include "led_control.h"

CommandMap commandMap[] = {
    {"LED1", "ON", &LED1_ON},
	{"LED1", "OFF", &LED1_OFF}
};

void check_command(char *str){

    char *command = strtok(str, "_");
    char *cond = strtok(NULL, "_");

    for ( int Commandidx = 0; Commandidx < (sizeof(commandMap)/sizeof(commandMap[0])); Commandidx++){
    		if(strcmp(command,commandMap[Commandidx].command) == 0 && strcmp(cond,commandMap[Commandidx].cond) == 0){
    			commandMap[Commandidx].function();
    			            break;
    		}
    }
}
