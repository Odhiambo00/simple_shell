#include "headerfile.h"

/**
 * sgt_Handler - function that will handle Ctrl-C signal
 * @sg_num: sigint variable
 */

void sgt_Handler(__attribute__((unused)) int sg_num)
{
	signal(SIGINT, sgt_Handler);
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, "$ ", 2);
}
