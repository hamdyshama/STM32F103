/*********************************************************************************/
/* Author    : Hamdy El Sayed                                                    */
/* Version   : V01                                                               */
/* Date      : 2 March 2023                                                      */
/*********************************************************************************/

#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"NVIC_interface.h"
#include"NVIC_private.h"
#include"NVIC_config.h"



void MNVIC_voidInit(void)

{

	SCB_AIRCR= MNVIC_GROUP_SUB__DISTRIBUTION ;
	
}

/* Function Enable Enterrupt */
void MNVIC_voidEnableInterrupt (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber<=31)
	{
		NVIC_ISER0 = (1 << Copy_u8IntNumber);

	}
	else if (Copy_u8IntNumber<=59)
	
	{
		Copy_u8IntNumber-=32;
		NVIC_ISER1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/* Return Error */
		
	}
	
}

/* Function Disable Enterrupt */
void MNVIC_voidDisableInterrupt (u8 Copy_u8IntNumber)
{
	if(Copy_u8IntNumber<=31)
	{
		NVIC_ICER0 = (1 << Copy_u8IntNumber);

	}
	else if (Copy_u8IntNumber<=59)
	
	{
		Copy_u8IntNumber-=32;
		NVIC_ICER1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/* Return Error */
		
	}
	
}

/* Function Set Pending Flag */
void MNVIC_voidSetPendingFlag   (u8 Copy_u8IntNumber)
{
		if(Copy_u8IntNumber<=31)
	{
		NVIC_ISPR0 = (1 << Copy_u8IntNumber);

	}
	else if (Copy_u8IntNumber<=59)
	
	{
		Copy_u8IntNumber-=32;
		NVIC_ISPR1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/* Return Error */
		
	}
	
}

/* Function Clear Pending Flag */
void MNVIC_voidClearPendingFlag (u8 Copy_u8IntNumber)
{
		if(Copy_u8IntNumber<=31)
	{
		NVIC_ICPR0 = (1 << Copy_u8IntNumber);

	}
	else if (Copy_u8IntNumber<=59)
	
	{
		Copy_u8IntNumber-=32;
		NVIC_ICPR1 = (1 << Copy_u8IntNumber);
	}
	else
	{
		/* Return Error */
		
	}
	
}

/* Function Get Active  Flag */
u8 MNVIC_u8GetActiveFlag (u8 Copy_u8IntNumber)
{
	u8 Local_u8Result=0;
		if(Copy_u8IntNumber<=31)
	{
		
	   Local_u8Result=GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
		
	}
	else if (Copy_u8IntNumber<=59)
	
	{
	   Copy_u8IntNumber-=32;
	   Local_u8Result=GET_BIT(NVIC_IABR1,Copy_u8IntNumber);
	   
	}
	else
	{
		/* Return Error */
		
	}
	return Local_u8Result;
}

/* Function Set Priority */
//void MNVIC_voidSetPriority(s8 Copy_s8IntID,u8 Copy_u8GroupPriority, u8 Copy_u8SubGroupPriority,u32 Copy_u32Group )
//{
//	u8 Local_u8Priority = Copy_u8SubGroupPriority|(Copy_u8GroupPriority<<(Copy_u32Group - 0x05FA0300)/256) ;
//	/* Core peripheral */
//
//	/* External peripheral */
//
//	if(Copy_s8IntID>=0)
//
//	{
//		NVIC_IPR[Copy_s8IntID]=Local_u8Priority << 4;
//	}
//
//		SCB_AIRCR = Copy_u32Group ;
//
//}
	
	//Another Function mini to set priority 
	/* void MNVIC_voidSetPriority(u8 Copy_u8PeripheralId,u8 Copy_u8GroupPriority) 
	
	{
		
		if(Copy_u8PeripheralId<60)
		{
			NVIC_IPR[Copy_u8PeripheralId]=Copy_u8GroupPriority;
			
			
		}
		else
		{
			
		// report error 
			
		}
		
		
		
	}
	*/

	
	
	
	
