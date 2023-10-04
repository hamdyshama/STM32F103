
/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      :19 June 2023 */
/*********************************************************************************/
#ifdef  SPI_PRIVATE_H
#define SPI_PRIVATE_H

 typedef struct
{
    volatile u32 CR1   ;
    volatile u32 CR2   ;
    volatile u32 SR    ;
    volatile u32 DR    ;
    volatile u32 CRCPR ;
    volatile u32 RXCRCR     ;
    volatile u32 TXCRCR     ;
    volatile u32 I2SCFGR    ;
    volatile u32 I2SSPR     ;
    
    
    
}SPI_Register;
#define MSPI1 ((SPI_Register*)0x40013000)


#endif
 
