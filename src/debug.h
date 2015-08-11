/*
 * debug.h
 *
 *  Created on: 10/10/2011
 *      Author: andrea.lima
 */

#ifndef DEBUG_H_
#define DEBUG_H_
#include <stdio.h>

#if !defined(DEBUG_CODE)
#define DEBUG1int(PARAMA, PARAMB)
#else
#define DEBUG1int(PARAMA, PARAMB)		\
{										\
	printf("DEBUG - %s: %d\n", PARAMA, PARAMB);	\
}
#endif


#endif /* DEBUG_H_ */
