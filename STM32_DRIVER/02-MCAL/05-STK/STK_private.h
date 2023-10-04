/*********************************************************************************/
/* Author    : Hamdy El Sayed                                                    */
/* Version   : V01                                                               */
/* Date      : 25 March 2023                                                      */
/*********************************************************************************/

#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H

typedef struct 
{
	volatile 32 CTRL  ;
	volatile 32 LOAD  ;
	volatile 32 VALUE ;
	

}MSTK_Type;

#define MSTK  (MSTK_Type*0xE000E010)

#define			MSTK_SRC_AHB				1
#define			MSTK_SRC_AHB_8				0

#define			MSTK_SINGLE_INTERVAL		0
#define			MSTK_PERIOD_INTERVAL		1




#endif