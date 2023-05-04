#include "main.h"


/**
 *
 *  * get_endianness - used check if a machine is little or big
 *
 *   * Return: 0 for large, 1 for small
 *
 *    */

int get_endianness(void)

{

	        unsigned int i = 1;

		        char *c = (char *) &i;


			        return (*c);

}
