#ifndef CDD_SER_LCD_SPI
  #define CDD_SER_LCD_SPI

  #include <stdint.h>
  #include <stddef.h>

  #define CDD_SERLCD_BLUE_BACKLIGHT       (uint8_t)0xD9U
  #define CDD_SERLCD_GREEN_BACKLIGHT      (uint8_t)0xBBU
  #define CDD_SERLCD_PRIMARY_BACKLIGHT    (uint8_t)0x9DU

  #define CDD_SERLCD_SETTING_MODE         (uint8_t)0x7CU
  #define CDD_SERLCD_CLEAR_DISPLAY        (uint8_t)0x2DU

  #define CDD_SERLCD_SIZE_WIDTH_20        (uint8_t)0x03U
  #define CDD_SERLCD_SIZE_LINES_04        (uint8_t)0x05U
  #define CDD_SERLCD_SIZE_LINES_02        (uint8_t)0x06U
  #define CDD_SERLCD_SIZE_LINES_01        (uint8_t)0x07U


  void CddSerLCD_Spi_Init(void);
  void CddSerLCD_Spi_WriteLine(const char* StringToPrint, const size_t StringSize, const size_t LineIndex);


#endif /* CDD_SER_LCD_SPI */