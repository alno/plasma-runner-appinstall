AppInstall Runner
=============

This is Plasma Runner Plugin, which allows to install missing applications from KRunner (Alt+F2) by entering their name.

Installation from packages
--------------------------

If you are using Ubuntu Karmic you may install package *plasma-runner-appinstall* from my PPA at https://launchpad.net/~alexey-noskov/+archive/kde

You can add this PPA to your system by adding `ppa:alexey-noskov/kde` to your system's Software Sources

This PPA can be added to your system manually by copying the lines below and adding them to your system's software sources.

    deb http://ppa.launchpad.net/alexey-noskov/kde/ubuntu lucid main 
    deb-src http://ppa.launchpad.net/alexey-noskov/kde/ubuntu lucid main 

Build instructions
------------------

    cd /where/your/runner/is/installed
    mkdir build
    cd build
    cmake -DCMAKE_INSTALL_PREFIX=$KDEDIRS .. 
    make 
    sudo make install

(your $KDEDIRS is where you install your KDE 4)

Restart krunner:

    kbuildsycoca4
    kquitapp krunner
    krunner

Alt-F2 to launch KRunner and in the runners list you will find application installation runner.

Copyright © 2010 Alexey Noskov, released under the GPLv3 license 
Idea from http://forum.kde.org/brainstorm.php#idea63024
