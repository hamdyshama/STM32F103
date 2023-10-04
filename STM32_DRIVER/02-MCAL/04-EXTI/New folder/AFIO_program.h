

/*********************************************************************************/
/* Author    : Hamdy El Sayed                                                    */
/* Version   : V01                                                               */
/* Date      : 22 March 2023                                                     */
/*********************************************************************************/


#include"STD_TYPES.h"
#include"BIT_MATHh"

#include"AFIO_interface.h"
#include"AFIO_config.h"
#include"AFIO_private.h"



void MAFIO_voidSetExtiConfiguration(u8 Copy_u8ExtiLine,u8 Copy_u8PortMap)

{
	
	u8 Local_u8RegIndex = 0;
	
	if(Copy_u8ExtiLine<=3)
	{
		u8 Local_u8RegIndex=0 ;
		
	}
	elseif(Copy_u8ExtiLine<=7)
	{
		Copy_u8ExtiLine - = 4;
		Local_u8RegIndex=1;
		
	}
	elseif(Copy_u8ExtiLine<=11)
	{
		Copy_u8ExtiLine - = 8;
		Local_u8RegIndex=2;
		
	}
	elseif(Copy_u8ExtiLine<=15)
	{
		Copy_u8ExtiLine - = 12;
		Local_u8RegIndex=3;
		
	}
	
	
	AFIO->EXTICR[Local_u8RegIndex] &=((0b1111)<<Copy_u8ExtiLine*4)  /*SET BIT of Register  EXTICR[0:4] */ 
	AFIO->EXTICR[Local_u8RegIndex] |=((Copy_u8PortMap)<< Copy_u8ExtiLine*4)  /*CLR BIT of Register  EXTICR[0:4] */
	
	
}
