#ifndef CDJSCAN150_H
#define CDJSCAN150_H

#include "CProjecteur.h"

class CDJScan150 : public CProjecteur {


public:
	void allumer();

	void eteindre();

	void setPan(/* Contient la valeur du déplacement à réaliser en dixième de degré. */unsigned short val);

    void setTilt(/* Contient la valeur du déplacement vertical en dixième de degrés. */unsigned short val);

    CDJScan150(CBufferDMX& buffer,int addr);
};

#endif
