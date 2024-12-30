# Bonkcoin Snap Packaging

Commands for building and uploading a Bonkcoin Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official Bonkcoin binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register bonkcoin-core
snapcraft upload \*.snap
sudo snap install bonkcoin-core
```

### Usage
```
bonkcoin-unofficial.cli # for bonkcoin-cli
bonkcoin-unofficial.d # for bonkcoind
bonkcoin-unofficial.qt # for bonkcoin-qt
bonkcoin-unofficial.test # for test_bonkcoin
bonkcoin-unofficial.tx # for bonkcoin-tx
```

### Uninstalling
```
sudo snap remove bonkcoin-unofficial
```