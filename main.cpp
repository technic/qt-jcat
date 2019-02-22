#include "main_task.hpp"

#include <QCoreApplication>
#include <QCommandLineParser>
#include <QTimer>
#include <QDebug>
#include <iostream>


int main(int argc, char *argv[])
{

    QCoreApplication app(argc, argv);
    MainTask m;
    QObject::connect(&m, &MainTask::finished, &app, &QCoreApplication::quit);

    QCommandLineParser parser;
    parser.addPositionalArgument("file", "QJson Document to show.");
    parser.process(app);

    QTimer::singleShot(0, &m, [&m, &parser]() {
        auto args = parser.positionalArguments();
        if (args.length() == 1) {
            auto fn = parser.positionalArguments().at(0);
            m.run(fn);
        } else {
            std::cout << parser.helpText().toStdString() << std::endl;
            emit m.finished();
        }
    });
    return app.exec();
}
