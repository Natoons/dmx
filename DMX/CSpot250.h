#ifndef CSPOT250_H
#define CSPOT250_H

#include "CProjecteur.h"

class CSpot250 : public CProjecteur {


public:
	void allumer();

	void eteindre();

	void setPan(/* Contient la valeur du d�placement en dixi�me de degr�s. */unsigned short val);

	void setTilt(/* Contient la valeur du d�placement en vertical en dixi�me de degr�s. */unsigned short val);

    CSpot250(CBufferDMX& buffer, int addr);
};

#endif
