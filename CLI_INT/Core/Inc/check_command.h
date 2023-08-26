#include <string.h>


void check_command(char *str);

typedef void (*CommandFunction)();

typedef struct {
    const char *command;
    const char *cond;
    CommandFunction function;
} CommandMap;
