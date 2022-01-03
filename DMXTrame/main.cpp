#include <QCoreApplication>
#include <QUdpSocket>
#include <QByteArray>
#include <QHostAddress>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QUdpSocket udpSocket;
    QHostAddress add;
    add.setAddress("10.0.132.230");

    QByteArray trame = QByteArray::fromHex("45 53 44 44 00 00 01 00 1D   00 85 00 00 00 00 60 00 00 01 00 FF 00 30 FF FF   00 85 00 00 00 60 FF FF   00 00 A0 50 48 06");

    udpSocket.writeDatagram(trame,add,3333);

    return a.exec();
}
