#if !defined TRUETYPE_H
#include "truetype_Arduino.h"
#endif /* TRUETYPE_H */

#if !defined SPI_FULLCOLOR_H
#include "spi_fullcolor_basis.h"
#endif /* SPI_FULLCOLOR_H */

//TFT command list
//#define PORTRAIT
#define LANDSCAPE

#define CMD_SLEEP_OUT 0x11
#define CMD_DISPLAY_ON 0x29
#define CMD_COLUMN_ADDRESS_SET 0x2a
#define CMD_PAGE_ADDRESS_SET 0x2b
#define CMD_MEMORY_WRITE 0x2c
#define CMD_MEMORY_ACCESS_CONTROL 0x36
#define CMD_COLMOD 0x3a

#define MAC_PORTRAIT 0xe8
#define MAC_LANDSCAPE 0x48
#define COLMOD_16BIT 0x55
#define COLMOD_18BIT 0x66

#if defined(PORTRAIT)
#define MAC_CONFIG MAC_PORTRAIT
#define tftWidth 320
#define tftHeifht 240
#define AdafruitTFTOrientation 1
#else
#define MAC_CONFIG MAC_LANDSCAPE
#define tftWidth 240
#define tftHeifht 320
#define AdafruitTFTOrientation 0
#endif
//TFT command list end

class ILI9341_spi_ttf : public outputttf {
  public:
    ILI9341_spi_ttf(SPIClass *_spi);

  protected:
    void set_rect(uint16_t _x1, uint16_t _x2, uint16_t _y1, uint16_t _y2);
};