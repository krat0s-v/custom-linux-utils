/**
 * @file ps.c
 * @author krat0s-v (https://github.com/krat0s-v)
 * @brief Implementation of the core logic for process data retrieval.
 */
#include "ps.h"

/**
 * @details Prints a formatted column header. 
 * We use \t to preserve the basic structure of the table.
 */
void print_ps_header(void) {
    printf("PID\tTTY\tTIME\tCMD\n");
}