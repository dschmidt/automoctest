#include <QObject>

#if QT_VERSION >= 0x040400


class AutomocTest : public QObject
{
    Q_OBJECT

    AutomocTest();
    ~AutomocTest();

};

#endif