#ifndef CWASH150_H
#define CWASH150_H

#include "CProjecteur.h"

class CWash150 : public CProjecteur{


public:
	void allumer();

	void eteindre();

	void setPan(/* Contient la valeur du déplacement horizontal en dixième de degrés. */unsigned short val);

	void setTilt(/* Contient la valeur du déplacement vertical en dixième de degrés. */unsigned short val);

    CWash150(CBufferDMX& buffer, int addr);
};

#endif
