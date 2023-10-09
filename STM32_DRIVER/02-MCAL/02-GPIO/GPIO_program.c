
/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                      */
/* Version   : V01                                                               */
/* Date      : 1 March 2023                                                     */
/*********************************************************************************/


#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"GPIO_interface.h"
#include"GPIO_private.h"
#include"GPIO_config.h"

void MGPIO_voidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Mode)
{
switch(Copy_u8Port)
    {
	case GPIOA:
	            if(Copy_u8Pin<=7)
				{//Low Register
				 GPIOA_CRL &= ~((0b1111)<< (Copy_u8Pin *4));
				 GPIOA_CRL |= ((Copy_u8Mode)<< (Copy_u8Pin *4));
				}
				else if(Copy_u8Pin<=15)
				{//High Register
			     Copy_u8Pin=Copy_u8Pin-8;
				 GPIOA_CRH &= ~((0b1111)<< (Copy_u8Pin *4));
				 GPIOA_CRH |= ((Copy_u8Mode)<< (Copy_u8Pin *4));
				}
				break;
					
					
	case GPIOB: 
	            if(Copy_u8Pin<=7)
				{//Low Register  
				 GPIOB_CRL &= ~((0b1111)<< (Copy_u8Pin *4));
				 GPIOB_CRH 	|=	((Copy_u8Mode) << (Copy_u8Pin * 4));
				}
				else if(Copy_u8Pin<=15)
				{//High Register
				 Copy_u8Pin=Copy_u8Pin-8;
				 GPIOA_CRH &= ~((0b1111)<< (Copy_u8Pin *4));
				 GPIOA_CRH |= ((Copy_u8Mode)<< (Copy_u8Pin *4));
				}
				break;

					
					
	case GPIOC:
	            if(Copy_u8Pin<=7)
				{//Low Register  
				 GPIOC_CRL &= ~((0b1111)<< (Copy_u8Pin *4));
				 GPIOC_CRL |=	((Copy_u8Mode) << (Copy_u8Pin * 4));
				}

				break;

		   default: break;
    }
}

void MGPIO_voidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value)
{
	switch(Copy_u8Port)
   {
		case GPIOA : 
		if(Copy_u8Value==GPIO_HIGH)
		{
			SET_BIT(GPIOA_ODR,Copy_u8Pin);
			
		}
		else if(Copy_u8Value==GPIO_LOW)
	    {
		   CLR_BIT(GPIOA_ODR,Copy_u8Pin);
		
        }
	  	    break ;
			
		case GPIOB : 
		if(Copy_u8Value==GPIO_HIGH)
		{
			SET_BIT(GPIOB_ODR,Copy_u8Pin);
			
		}
		else if(Copy_u8Value==GPIO_LOW)
	    {
		   CLR_BIT(GPIOB_ODR,Copy_u8Pin);
		
        }
	  	break ;
		
		case GPIOC : 
		if(Copy_u8Value==GPIO_HIGH)
		{
			SET_BIT(GPIOC_ODR,Copy_u8Pin);
			
		}
		else if(Copy_u8Value==GPIO_LOW)
	    {
		   CLR_BIT(GPIOC_ODR,Copy_u8Pin);
		
        }
   else
   			{
   			/*	Do Nothing	*/
   			}
   			break;
   		}

   }





u8 MGPIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin)
 {
	u8 Loc_u8Result=0;
	switch(Copy_u8Port)
	{
		case GPIOA : Loc_u8Result=GET_BIT(GPIOA_IDR,Copy_u8Pin);
		  
		  break ;
		case GPIOB : Loc_u8Result=GET_BIT(GPIOB_IDR,Copy_u8Pin);
		  
		  break ;
		  
		case GPIOC : Loc_u8Result=GET_BIT(GPIOC_IDR,Copy_u8Pin);
		  
		  break ;
		  
		  
		  default: break ; 
	}
	
	return Loc_u8Result ;
	
	
 }
