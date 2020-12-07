
Debian
====================
This directory contains files used to package emojid/emoji-qt
for Debian-based Linux systems. If you compile emojid/emoji-qt yourself, there are some useful files here.

## emoji: URI support ##


emoji-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install emoji-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your emoji-qt binary to `/usr/bin`
and the `../../share/pixmaps/emoji128.png` to `/usr/share/pixmaps`

emoji-qt.protocol (KDE)

