/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 15 june 2023                                                      */
/*********************************************************************************/

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DMA_interface.h"
#include"DMA_private.h"
#include"DMA_config.h"



void MDMA_voidChannelInit(void)

{
    
   /*
        Memory to memory
        Priority very high
        Source, destination size=32bit
        MINC , PINC activated
        No circular
        Direction: peripheral to memory
        Transfer complete interrupt enable
        Channel Disable
    */
#if CHANNEL_ID == 1
    DMA -> Channel[0].DMA_CCR =0x00007AC2;
    
}

void MDMA_voidChannelStart(u32 *Copy_Pu32SourceAdress,u32 *Copy_Pu32DestinationAdress,u16 Copy_u16BlockLength)
{
/*Make sure channel is disabled*/
CLR_BIT(DMA->Channel[0].CCR,0);
/*Load the addresses*/
DMA->Channel[0].CPAR=Copy_Pu32SourceAdress;
DMA->Channel[0].CMAR=Copy_Pu32DestinationAdress;

/*Load the block length*/
DMA->Channel[0].CNDTR=Copy_u16BlockLength;
/*Enable  Channel */
SET_BIT(DMA->Channel[0].CCR,0);
}


