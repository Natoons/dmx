#include "CProjecteur.h"

CProjecteur::CProjecteur(CBufferDMX& buffer, int nbc, int addr)
{
     adresseBase = addr;
     nbCanaux = nbc;
     univers1 = &buffer;
     registre.resize(nbCanaux);

}

int CProjecteur::getAdresseBase()
{
	return this->adresseBase;
}

void CProjecteur::writeBuffer()
{
    univers1->writeBuffer(registre,adresseBase);
}

CProjecteur::CProjecteur()
{


}
