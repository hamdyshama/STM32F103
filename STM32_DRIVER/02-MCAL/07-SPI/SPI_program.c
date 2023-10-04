
/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 19 June 2023                                                      */
/*********************************************************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"SPI_interface.h"
#include"STD_private.h"
#include"STD_config.h"




void MSPI1_voidInit(void)
{
    /* Choose Clk Polarity -->  Low Rising is leading edge
       Choose Clk Phase    --> High (Write then Read )
       Frequency --> freq /2
       Mode --> Master
       Data Order --> MSB  Send First
     */
      MSPI->CR1=0x0305;
    
}

void SPI1_voidSendReceiveSynch(u8 Copy_u8DataToTransmit,u8* Copy_DataToReceive)
{
    /* Clear For Slave Select Pin */
    MGPIO_voidSetPinValue(MSPI1_SALAVE_PIN,LOW);
    
    /* Send Data */
    MSPI1->DR=Copy_u8DataToTransmit ;
    /* Wait Busy Flag to Finish */
    
    while(GET_BIT(MSPI1_SALAVE ->SR,7)==1);
    
    /* Return to the receive data */
    *Copy_DataToReceive =MSPI1 ->DR ;
    
    /* Set  Slave Select Pin */
    MGPIO_voidSetPinValue(MSPI1_SALAVE_PIN,HIGH);

    
}


void SPI1_voidSendReceiveASynch(u8 Copy_u8DataToTransmit,void (*CallBack)(u8))
{
    
    /* Clear For Slave Select Pin */
    MGPIO_voidSetPinValue(MSPI1_SALAVE_PIN,LOW);
    
    /* Send Data */
    MSPI1->DR=Copy_u8DataToTransmit ;

    /* Return to the receive data */
    *Copy_DataToReceive =MSPI1 ->DR ;
    
    /* Set  Slave Select Pin */
    MGPIO_voidSetPinValue(MSPI1_SALAVE_PIN,HIGH);
 
}

void MSPI1_IRQHandler(void)
{
    
    CallBack(MSPI1->DR);
}
