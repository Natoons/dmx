#ifndef CBUFFERDMX_H
#define CBUFFERDMX_H

/**
 * Cette classe a pour responsabilité de contenir le buffer DMX512
 */

#include "CDMXEtherGate.h"

class CBufferDMX
{

private:
	CDMXEtherGate boite_noire;
	/**
	 * Contient le buffer DMX dans sa totalité.
     */
    QByteArray buffer;

public:
	CBufferDMX();

	/**
	 * Permet d'ecrire les informations dans le buffer DMX. Cette méthode réalise uniquement l'écriture des informations. Elle met les informations au bon endroit en fonction des valeurs des paramètres.
	 */
    void writeBuffer(/* Le bloc en lui-même */QByteArray source, /* Permet d'indiquer à quelle adresse on désire mémoriser les octets */int adresse);

    //void ~CBufferDMX();

	/**
	 * Envoie le buffer via l'interface Ethergate. Delegation
	 */
	void sendBuffer();
};

#endif
