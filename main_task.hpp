#pragma once

#include <QObject>

class MainTask: public QObject
{
    Q_OBJECT
public:
    MainTask(QObject *parent = nullptr) : QObject(parent) {}
public slots:
    void run(const QString &fileName);
signals:
    void finished();
};
