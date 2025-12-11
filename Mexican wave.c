#include <ctype.h>
#include <string.h>

void wave(const char *string, char *const waves[])
{
    int len = strlen(string);
    int wave_index = 0;  

    for (int i = 0; i < len; i++) {

        if (string[i] == ' ')
            continue;  
        strcpy(waves[wave_index], string);

        waves[wave_index][i] = toupper(string[i]);

        wave_index++;   
    }
}
