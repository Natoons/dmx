#include "CWash150.h"

void CWash150::allumer()
{
    registre[7] = 0xFF;   //Shutter,Strobe,Reset
    writeBuffer();
}

CWash150::CWash150(CBufferDMX& buffer, int addr) : CProjecteur(buffer,16,addr)
{
    registre[0] = 0x00;   //pan
    registre[1] = 0x85;   //tilt
    registre[2] = 0x00;   //pan fine
    registre[3] = 0x00;   //tilt fine
    registre[4] = 0x00;   //Speed of PAN/TILT movement
    registre[5] = 0x60;   //couleur
    registre[6] = 0xFF;   //Dimmer intensity
    registre[7] = 0xFF;   //Shutter,Strobe,Reset



    writeBuffer();
    //00 85 00 00 00 60 FF FF
}

void CWash150::eteindre()
{
    registre[7] = 0x00;   //Shutter,Strobe,Reset
    writeBuffer();
}

void CWash150::setPan(/* Contient la valeur du déplacement horizontal en dixième de degrés. */unsigned short val)
{
    registre[0] = val;   //pan
    writeBuffer();
}

void CWash150::setTilt(/* Contient la valeur du déplacement vertical en dixième de degrés. */unsigned short val)
{
    registre[1] = 0xC0;   //tilt
    writeBuffer();
}
