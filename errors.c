#include "monty.h"

/**
 * get_error_1 - gets error
 * @err_code: error code
 * 
 * Return: void
*/
void get_error_1(short int err_code)
{
    switch (err_code)
    {
        case 11:
            fprintf(stderr, "Error: malloc failed\n");
            free_data();
            break;
        case 12:
            fprintf(stderr, "USAGE: monty file\n");
            break;
        case 13:
            fprintf(stderr, "Error: can't open file %s\n", data.filename);
            break;
        case 14:
            fprintf(stderr, "L%d: unknown instruction %s\n",
                data.line_number, data.args[0]);
            free_data();
            break;
    }
}