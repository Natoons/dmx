#include "CBufferDMX.h"

CBufferDMX::CBufferDMX()
{
    buffer.resize(512);
    buffer.fill(0);
}

void CBufferDMX::writeBuffer(/* Le bloc en lui-même */QByteArray source,/* Permet d'indiquer à quelle adresse on désire mémoriser les octets */int adresse)
{
    buffer.replace(adresse-1,buffer.size(),source);
}

void CBufferDMX::sendBuffer()
{
    boite_noire.sendData(buffer);
}
