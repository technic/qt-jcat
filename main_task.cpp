#include "main_task.hpp"

#include <QJsonDocument>
#include <QFile>
#include <QTextStream>
#include <QDebug>

void MainTask::run(const QString &fileName) {
    QFile file(fileName);
    bool ok = file.open(QIODevice::ReadOnly);
    if (!ok) {
        QTextStream(stdout) << "Can't open file" << fileName;
        emit finished();
        return;
    }
    auto doc = QJsonDocument::fromBinaryData(file.readAll());
    QTextStream(stdout) << doc.toJson(QJsonDocument::Indented);
    emit finished();
}
