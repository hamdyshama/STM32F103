/*********************************************************************************/
/* Author    :Hamdy El Sayed                                                     */
/* Version   : V01                                                               */
/* Date      : 15 june 2023                                                      */
/*********************************************************************************/

#ifdef   DMA_PRIVATE_H
#define  DMA_PRIVATE_H

typedef struct
{
    volatile u32 DMA_CCR ;
    volatile u32 DMA_CNDTR ;
    volatile u32 DMA_COAR ;
    volatile u32 DMA_CMAR;
    volatile u32 DMA_Reserved;
    
}DMA_Channel;

typedef struct
{
    volatile u32  DMA_ISR   ;
    volatile u32  DMA_IFCR  ;
    DMA_Channel Channel[7];
    
    
}DMA_type;

#define DMA ((volatile DMA_type *)0x040020000)









 


#endif
