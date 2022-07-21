#include "main.h"



/**
<<<<<<< HEAD
 *
 *  * get_endianness - Checks the endianness.
 *
 *   *
 *
 *    * Return: If big-endian - 0.
 *
 *     *         If little-endian - 1.
 *
 *      */

int get_endianness(void)

{

		int num = 1;

			char *endian = (char *)&num;



				if (*endian == 1)

							return (1);



					return (0);

=======
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
>>>>>>> 4bebc9977dc9630bdbf4762e90502d7a94dd5418
}
