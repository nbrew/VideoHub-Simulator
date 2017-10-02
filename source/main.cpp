#include <QCoreApplication>
#include "videohubserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    VideoHubServer s;

    qDebug("Starting Videohub Server...");
    s.start();

    return a.exec();
}
