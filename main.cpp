/*
qtl866 - GUI driver for minipro EPROM/Device programmer software
    See also https://github.com/vdudouyt/minipro
    Copyright (C) 2014  Al Williams al.williams@awce.com

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Silly workaround to avoid qgtk from running a file picker
    // on wayland while it assumes a X11 window.
    setenv("WAYLAND_DISPLAY", "", 1);

    a.setApplicationName("qtl866");
    a.setOrganizationDomain("com.awce");

    MainWindow w;
    w.show();

    return a.exec();
}
