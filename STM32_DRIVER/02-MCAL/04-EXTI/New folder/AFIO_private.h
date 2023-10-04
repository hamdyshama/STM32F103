/*********************************************************************************/
/* Author    : Hamdy El Sayed                                                    */
/* Version   : V01                                                               */
/* Date      : 22 March 2023                                                     */
/*********************************************************************************/

#ifndef AFIO_PRIVATE_H
#define AFIO_PRIVATE_H



typedef struct{
	
	volatile u32 EVCR      ;
	volatile u32 EXTICR[4] ;  /*  Array of 4 register * CR(1:5) */ 
	volatile u32 MAPR      ;
	volatile u32 MAPR2     ;
	
	
	
	
}AFIO_Type ;

#define AFIO  ((volatile AFIO_Type*)0x40010000)  /* pointer of struct */

#endif


