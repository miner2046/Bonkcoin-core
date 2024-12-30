
Debian
====================
This directory contains files used to package bonkcoind/bonkcoin-qt
for Debian-based Linux systems. If you compile bonkcoind/bonkcoin-qt yourself, there are some useful files here.

## bonkcoin: URI support ##


bonkcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bonkcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bonkcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/bonkcoin128.png` to `/usr/share/pixmaps`

bonkcoin-qt.protocol (KDE)

