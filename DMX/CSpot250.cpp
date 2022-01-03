#include "CSpot250.h"

void CSpot250::allumer()
{
    registre[14] = 0xFF;    //Shutter,Strobe
    writeBuffer();
}

CSpot250::CSpot250(CBufferDMX& buffer, int addr) : CProjecteur(buffer,16,addr)
{
    registre[0] = 0x00;   //pan
    registre[1] = 0x85;   //tilt
    registre[2] = 0x00;   //pan fine
    registre[3] = 0x00;   //tilt fine
    registre[4] = 0x00;   //Speed of PAN/TILT movement
    registre[5] = 0x00;   //Lamp on/off,reset,fans speed control
    registre[6] = 0x60;   //couleur
    registre[7] = 0x00;   // nul
    registre[8] = 0xFF;   //effect
    registre[9] = 0x00;   //3 facet prism rotation control
    registre[10] = 0x00;   //rotating gobos
    registre[11] = 0x00;   // Rotating gobo index,rotating gobo rotation
    registre[12] = 0x00;   //nul
    registre[13] = 0x00;   //focus
    registre[14] = 0xFF;    //Shutter,Strobe
    registre[15] = 0xFF;  //Dimmer intensity

    writeBuffer();
    //69 45 00 00 00 00 60 00 FF 00 00 00 00 00 00 FF
}

void CSpot250::eteindre()
{
     registre[14] = 0x00;   //Shutter,Strobe
     writeBuffer();
}

void CSpot250::setPan(/* Contient la valeur du d�placement en dixi�me de degr�s. */unsigned short val)
{

     registre[0] = val; //pan
     writeBuffer();
}

void CSpot250::setTilt(/* Contient la valeur du d�placement en vertical en dixi�me de degr�s. */unsigned short val)
{
    registre[1] = val;  //tilt
    writeBuffer();
}
