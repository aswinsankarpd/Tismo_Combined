/*
 * addtobuffer.h
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#ifndef CLI_ADDTOBUFFER_H_
#define CLI_ADDTOBUFFER_H_

#include "main.h"
#include "CommandLineInterface.h"
#include "command_parser.h"

void addtobuffer(char *Rx_Temp_String);
void buff_copy_callback();
int get_Rx_Over_Flag();
#endif /* CLI_ADDTOBUFFER_H_ */
