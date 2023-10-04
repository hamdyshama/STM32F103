
/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 15 june 2023                                                      */
/*********************************************************************************/
#ifdef   DMA_INTERFACE_H
#define  DMA_INTERFACE_H

void MDMA_voidChannelInit(void);

void MDMA_voidChannelStart(u32 *Copy_Pu32SourceAdress,u32 *Copy_Pu32DestinationAdress,u16 Copy_u16BlockLength);





#endif
