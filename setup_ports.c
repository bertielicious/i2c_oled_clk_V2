
#include <pic16f1459.h>

void setup_ports(void)
{
    ANSELA = 0x00;
    ANSELB = 0x00;
    ANSELC = 0x00;  
    TRISCbits.TRISC7 = 0;
    TRISAbits.TRISA5 = 0;   // diag LED
}
