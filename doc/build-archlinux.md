Arch Linux build guide
----------------------

**Last tested with:** 1.0-dev
**Test date:** 2022/07/15

This example lists the steps necessary to setup and build a command line only
friccoind on archlinux:

```sh
pacman -S git base-devel boost libevent python db
git clone https://github.com/Friccoin/friccoin.git
cd friccoin/
./autogen.sh
./configure --without-gui --without-miniupnpc
make
```
