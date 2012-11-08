#include <QObject>

#if QT_VERSION >= 0x040400 || defined(DOXYGEN_RUN)


class AutomocTest : public QObject
{
    Q_OBJECT

    AutomocTest();
    ~AutomocTest();

};

#endif