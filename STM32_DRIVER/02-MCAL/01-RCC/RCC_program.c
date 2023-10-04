/************************************************************************/
/*	AUTHOR		:		HAMDY EL SAYED							        */
/*	VERSION		:		V01												*/
/*	DATE		:		16	FEB	2023									*/
/************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidInitSysClock(void)
{
	#if   RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
	          RCC_CR=0x00010000;   /* Enable HSE with no bypass */
	#elif RCC_CLOCK_TYPE == RCC_HSE_RS
	          RCC_CR=0x00050000;   /* Enable HSE with bypass */
    #elif RCC_CLOCK_TYPE == RCC_HSI
		      RCC_CR=0x00000081;   /* Enable HSI + Trimming = 0 */
			   
	#elif RCC_CLOCK_TYPE == RCC_PLL	
	
	#else 
	    #error("You Chosed Wrong Clock Type")
	#endif
}

void RCC_voidEnableClock(u8 Copy_u8BusId ,u8 Copy_u8PeripheralId )
{
	if(Copy_u8PeripheralId <=31)
	{
		
		switch(Copy_u8BusId )
		{
		case RCC_AHB  : SET_BIT(RCC_AHBENR  ,Copy_u8PeripheralId);   break;
		case RCC_APB1 : SET_BIT(RCC_APB1ENR ,Copy_u8PeripheralId);   break;
		case RCC_APB2 : SET_BIT(RCC_APB2ENR ,Copy_u8PeripheralId);   break;
		default       : /* Return Error */                           break;
		
	     }
	}
		else
	{
		
		/* return Error */
		
	}
	
	

}

void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId)
{
	if (Copy_u8PerId <= 31)
	{
		switch (Copy_u8BusId)
		{
			case RCC_AHB  : CLR_BIT(RCC_AHBENR  ,Copy_u8PerId);   break;
			case RCC_APB1 : CLR_BIT(RCC_APB1ENR ,Copy_u8PerId);   break;
			case RCC_APB2 : CLR_BIT(RCC_APB2ENR ,Copy_u8PerId);   break;
		}
	}
	
	else
	{
		/* Return Error */
	}

}
