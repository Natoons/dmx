#include "CDMXEtherGate.h"

CDMXEtherGate::CDMXEtherGate()
{

}

int CDMXEtherGate::sendData(/* Les octets qui seront envoyés via la passerelle. */QByteArray buf)
{
    QByteArray enttec = QByteArray::fromHex("45 53 44 44 00 00 01 ");

    unsigned char fort = buf.size() >> 8;
    unsigned char faible = buf.size();
    enttec.append(fort);
    enttec.append(faible);

    QHostAddress add;
    add.setAddress("10.0.132.230");

    sock.writeDatagram(enttec + buf,add,3333);

    return 0;
}
