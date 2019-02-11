#include "config.h"
#include "set_page_address.h"
#include "OLED_write.h"

void clear_OLED(void)
{
    uchar row, seg;
   
     for (row = 0; row <8; row++)
    {
        set_page_address(0x78, 0x00, row);
        for (seg = 0; seg < 128; seg++)
        {
            OLED_write(0x78, 0x40, 0x00);
        }
    }
}
