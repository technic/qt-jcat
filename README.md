# jcat

[![Build Status](https://travis-ci.org/technic/qt-jcat.svg?branch=master)](https://travis-ci.org/technic/qt-jcat)

Micro console utility to dump binary QJsonDocument contents. For example:
```bash
$ ./jcat ~/.local/share/plasma/plasmoids/kpluginindex.json
[
    {
        "FileName": "/home/user/.local/share/plasma/plasmoids/org.kde.simpleMonitor/metadata.desktop",
        "KPlugin": {
            "Authors": [
                {
                    "Email": "slack.dhabyx@gmail.com, oss.konstantin.shtepa@yandex.ru",
                    "Name": "DhabyX, Konstantin Shtepa"
                }
            ],
            "Category": "System Information",
            "Dependencies": [
            ],
            "Description": "Plasma Simple System Monitor",
            "Description[es]": "Monitor de Sistema simple para Plasma",
            "Description[ru_RU]": "Простой системный монитор-плазмоид",
            "EnabledByDefault": true,
            "FormFactors": [
                "tablet",
                "mediacenter",
                "desktop"
            ],
            "Icon": "../plasma/plasmoids/simpleMonitor/contents/images/simpleMonitor.svg",
            "Id": "org.kde.simpleMonitor",
            "License": "GPL3",
            "Name": "Simple Monitor",
            "Name[es]": "Monitor de sistema simple",
            "Name[ru_RU]": "Простой системный монитор",
            "ServiceTypes": [
                "Plasma/Applet"
            ],
            "Version": "0.6",
            "Website": "http://plasma.kde.org/"
        },
        "X-Plasma-API": "declarativeappletscript",
        "X-Plasma-MainScript": "ui/main.qml",
        "X-Plasma-Requires-FileDialog": "Unused",
        "X-Plasma-Requires-LaunchApp": "Unused",
        "X-Plasma-StandAloneApp": true
    },
    {
        "FileName": "/home/user/.local/share/plasma/plasmoids/org.kde.windowtitle/metadata.desktop",
        "KPlugin": {
            "Authors": [
                {
                    "Email": "mvourlakos@gmail.com",
                    "Name": "Michail Vourlakos"
                }
            ],
            "Category": "Windows and Tasks",
            "Description": "Shows the application title and icon of the active window",
            "Icon": "preferences-desktop",
            "Id": "org.kde.windowtitle",
            "License": "GPLv2",
            "Name": "Window Title",
            "ServiceTypes": [
                "Plasma/Applet"
            ],
            "Version": "0.3",
            "Website": "https://github.com/psifidotos/applet-window-title"
        },
        "Keyword": "window title icon",
        "X-Plasma-API": "declarativeappletscript",
        "X-Plasma-MainScript": "ui/main.qml"
    }
]
```
