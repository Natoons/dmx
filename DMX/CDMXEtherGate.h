#ifndef CDMXETHERGATE_H
#define CDMXETHERGATE_H

/**
 * Cette classe a pour responsabilité d'envoyer le buffer DMX 512 via la passerelle EtherGate
 */
#include<QUdpSocket>

class CDMXEtherGate
{

private:
	unsigned int adresseIP;
    QUdpSocket sock;

public:
	/**
	 * Destructeur : clean up DLL winsock
	 */
    //void ~CDMXEtherGate();

	/**
	 * Constructeur par défaut. Adresse IP usine
	 */
	CDMXEtherGate();

	/**
	 * Envoi d'un bloc DMX - mode standard non compresse
	 */
    int sendData(/* Les octets qui seront envoyés via la passerelle. */QByteArray buf);

	/**
	 * Dump ecran d'un bloc pour debug
	 */
};

#endif
