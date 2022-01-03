#include <QCoreApplication>
#include "CDMXEtherGate.h"
#include "CBufferDMX.h"
#include "CProjecteur.h"
#include "CSpot250.h"
#include "CWash150.h"
#include "CDJScan150.h"
#include "CProjecteur.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //test.writeBuffer(QByteArray::fromHex("69 45 00 00 00 00 60 00 FF 00 00 00 00 00 00 FF   00 85 00 00 00 60 FF FF   00 00 A0 50 48 06"),1);


    vector<CProjecteur*> ttprojo;

    CBufferDMX test;

    CSpot250 spot250(test,1);
    ttprojo.push_back(&spot250);
    CWash150 wash150(test,17);
    ttprojo.push_back(&wash150);
    CDJScan150 djscan150(test, 27);
    ttprojo.push_back(&djscan150);

    for (unsigned int i = 0;i<ttprojo.size();i++)
        {
            ttprojo.at(i)->allumer();
            ttprojo.at(i)->writeBuffer();
        }

       test.sendBuffer();

    return a.exec();
}
