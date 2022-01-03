#ifndef CPROJECTEUR_H
#define CPROJECTEUR_H

/**
 * Classe abstraite, qui sert de base à la construction des projecteurs
 */

#include "CBufferDMX.h"

class CProjecteur
{

protected:
	/**
	 * Contient l'adresse de base du projecteur sur le bus DMX. L'adresse est mémorisée comme pour le bus DMX.
	 */
	int adresseBase;
	/**
	 * Représente le nombre de canaux utilisés par le projecteur
	 */
	int nbCanaux;
	/**
	 * Contient une "image" locale de la valeur des informations du bus DMX propre au projecteur.
	 */
    QByteArray registre;

    CBufferDMX *univers1;

public:
    virtual void allumer() = 0;

    //void ~CProjecteur();

	CProjecteur(CBufferDMX& buffer, int nbc, int addr);

    virtual void eteindre() = 0;

	/**
	 * Accesseur pour obtenir l'adresse de base du projecteur
	 */
	int getAdresseBase();

    virtual void setPan(/* Déplacement en mode Dixième de degré */unsigned short val) = 0;

    virtual void setTilt(/* Déplacement en dixième de degrés */unsigned short val) = 0;

	void writeBuffer();

private:
	CProjecteur();
};

#endif
