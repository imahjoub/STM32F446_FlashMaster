#ifndef CDD_DMA_2023_08_27_H
  #define CDD_DMA_2023_08_27_H

  #include <stddef.h>
  #include <stdint.h>

  void Dma2Stream3SpiTxInit(void);
  void Dma2Stream2SpiRxInit(void);
  void Dma2Stream2SpiReceive(uint32_t RxData, const uint32_t DataLen);
  void Dma2Stream3SpiSend(uint32_t TxData, const uint32_t DataLen);

#endif /* CDD_DMA_2023_08_27_H */


