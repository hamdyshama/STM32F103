/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      :19 June 2023                                                      */
/*********************************************************************************/

#ifdef  SPI_INTERFACEH_H
#define SPI_INTERFACEH_H

void MSPI1_voidInit(void);

void SPI1_voidSendReceiveSynch(u8 Copy_u8DataToTransmit,u8* Copy_DataToReceive);

#endif

