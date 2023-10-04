/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 22 March 2023                                                     */
/*********************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "EXTI_interface.h"
#include "EXTI_config.h"
#include "EXTI_private.h"


void MEXTI_voidInit()
{
	#if EXTI_MODE == RISING
	SET_BIT(EXTI->RTSR,EXTI_LINE);
	#elif EXTI_MODE == FALLING
	SET_BIT(EXTI->FTSR,EXTI_LINFTSR);
	#elif EXTI_MODE == ON_CHANGE
	SET_BIT(EXTI->RTSR,EXTI_LINE);
	SET_BIT(EXTI->FTSR,EXTI_LINFTSR);
	#else #error "Wrong Mode and Line Choice"
	#endif
	
	/* Disable Interrupt */
	CLR_BIT(EXTI->IMR,Copy_u8EXTILine);

	
	
}

void MEXTI_voidEnableExti(u8 Copy_u8EXTILine)
{
	
	SET_BIT(EXTI->IMR,Copy_u8EXTILine);
	
}

void MEXTI_voidDisableExti(u8 Copy_u8EXTILine)
{
	CLR_BIT(EXTI->IMR,Copy_u8EXTILine);

}

void MEXTI_voidSwTrigger(u8 Copy_u8EXTILine)
{
	
	SET_BIT(EXTI->SWIER,Copy_u8EXTILine);
}

void MEXTI_voidSetSignalLatch(u8 Copy_u8EXTILine,u8 Copy_u8EXTIMode)
{
	switch(Copy_u8EXTIMode)
	{
		case  RISING    : 	SET_BIT(EXTI->RTSR,EXTI_LINE);     break;

		case  FALLING   :  	SET_BIT(EXTI->FTSR,EXTI_LINFTSR);  break;

		case  ON_CHANGE :   SET_BIT(EXTI->RTSR,EXTI_LINE);
	                        SET_BIT(EXTI->FTSR,EXTI_LINFTSR);  break;
	
	}
	
	
}
 