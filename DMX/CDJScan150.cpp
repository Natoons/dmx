#include "CDJScan150.h"

void CDJScan150::allumer()
{
    registre[3] = 0x06; //Shutter,Strobe,Gobos
    writeBuffer();
}

void CDJScan150::eteindre()
{
    registre[3] = 0x00; //Shutter,Strobe,Gobos
    writeBuffer();
}

void CDJScan150::setPan(/* Contient la valeur du déplacement à réaliser en dixième de degré. */unsigned short val)
{
      registre[0] = val;    //pan
      writeBuffer();
}

void CDJScan150::setTilt(/* Contient la valeur du déplacement vertical en dixième de degrés. */unsigned short val)
{
      registre[1] = val;    //tilt
      writeBuffer();
}

CDJScan150::CDJScan150(CBufferDMX& buffer,int addr) : CProjecteur(buffer,16,addr)
{
    registre[0] = 0xA0;   //pan
    registre[1] = 0x85;   //tilt
    registre[2] = 0x48;     //couleur
    registre[3] = 0x06;   //Shutter,Strobe,Gobos


    writeBuffer();
    //A0 50 48 06
}
