/** @brief: Function to add characters to buffer.
 *  @params: st. Receives single char as parameter
 *  @author aswinsankar
 */

#include "addtobuffer.h"
#include <string.h>
#include "check_command.h"
#include "usart_handler.h"

static int idx = 0;
char Rx_data1[10];
char Rx_data2[10];
char str[1];

void addtobuffer(char *str){
	if (str != '\r') {
	          Rx_data1[idx] = str;
	          idx++;
	      } else {
	          memcpy(Rx_data2, Rx_data1, sizeof(Rx_data1));
	          check_command(Rx_data2);
	          idx = 0;
	          memset(Rx_data1, 0, sizeof(Rx_data2));// Reset the index for the next set of data
	      }
	Received_Interrupt();
}
