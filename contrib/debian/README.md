
Debian
====================
This directory contains files used to package EMOJd/EMOJ-qt
for Debian-based Linux systems. If you compile EMOJd/EMOJ-qt yourself, there are some useful files here.

## pivx: URI support ##


EMOJ-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install EMOJ-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your EMOJ-qt binary to `/usr/bin`
and the `../../share/pixmaps/pivx128.png` to `/usr/share/pixmaps`

EMOJ-qt.protocol (KDE)

