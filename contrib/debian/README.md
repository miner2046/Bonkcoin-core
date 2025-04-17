
Debian
====================
This directory contains files used to package friccoind/friccoin-qt
for Debian-based Linux systems. If you compile friccoind/friccoin-qt yourself, there are some useful files here.

## friccoin: URI support ##


friccoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install friccoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your friccoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/friccoin128.png` to `/usr/share/pixmaps`

friccoin-qt.protocol (KDE)

