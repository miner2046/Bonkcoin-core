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
snapcraft register friccoin-core
snapcraft upload \*.snap
sudo snap install friccoin-core
```

### Usage
```
friccoin-unofficial.cli # for friccoin-cli
friccoin-unofficial.d # for friccoind
friccoin-unofficial.qt # for friccoin-qt
friccoin-unofficial.test # for test_friccoin
friccoin-unofficial.tx # for friccoin-tx
```

### Uninstalling
```
sudo snap remove friccoin-unofficial
```