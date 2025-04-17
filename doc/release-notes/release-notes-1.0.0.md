##Friccoin Core 1.0.0 Release Notes (Initial Release)

####Technical

* Change port numbers to the following

    | Function | mainnet | testnet | regtest |
    | :------- | ------: | ------: | ------: |
    | P2P      |   14327 |   14328 |   14329 |
    | RPC      |   15612 |   15613 |   15614 |
    
* Set AuxPow ChainID to `63`.
* Remove occurances of Dogecoin and replace with Friccoin where appropriate.
* All Friccoin addresses now start with the letter `B`. All other address prefixes Dogecoin uses will be adopted by Friccoin for familiarity purposes.
* Update `PUBKEY_ADDRESS` from `30` to `25` (Address prefixes start with `B` instead of `D`). Update `base58_keys_valid.json` and `base58_keys_invalid.json` with `gen_base58_test_vectors.py`
* Update `key_tests.cpp` with new Friccoin addresses to resolve test failures.
* Resolve test failures in `key_tests.cpp`
* Resolve test failures in `bctest.py`
* Initialize genesis block data (nonce, timestamp, unix time, hashes, merkle root hash). Remove checkpoints. Set new `nMinimumChainWork` and `defaultAssumeValid`
* Add genesis block data to regtest network.
* Add genesis public key to `miner_tests.cpp`
* Resolve test failure in `rpcnestedtests.cpp`
* Use new genesis block for regtest that is compatible with unit tests. Update a few references of the old genesis hash to the new one. 
* Change Unix timestamp for regtest block to Dogecoin and Litecoin's timestamp for their blocks. This makes the python unit tests easier to run.
* Add seed nodes for main and test nets
* Add DNS Seed nodes to `chainparams.cpp` and dnsseed-policy to point to generic seeder project on github
* Update Dogecoin address strings to Friccoin addresses in `uritests.cpp`
* Change magic numbers in `pow.cpp` and `friccoin.cpp` to the correct values which reflect the block height digishield min difficulty block activates
* Update `checkpointsData` to the genesis blocks
* Update `nMinimumChainWork`. It was too high. 
* Set client version to `1.0.0` in `clientversion.h`
* Add more seed nodes. 15 for main net and 3 for test net in total.

####Design

* Add new Friccoin vector logos.
* Add newer and nicer `friccoin.png` logo to splash screen.
* Remove Dogecoin logos `qt/res/icons` folder
* Update the `wallet_bgcoin.png` file to the new Friccoin logo
* Remove Comic Sans. Add `RobotoMono` and set GUI to use `Monospace` font
* Change `"Wow"` to `"Overview"`, `"Such Send"` to `"Send"`, `"Much Receive"` to `"Receive"`, and `"So Print"` to `"Print"`
* Remove `"much"` and `"such"` strings in `README.md`
* Change UI text `"Very new address"` to `"New address"`
* Add `friccoin.icns` file
* Update fee strings in GUI from Dogecoin theme to Friccoin theme
* Create new `about.png` with a Friccoin logo
* Add new design for `paper_wallet.png`
* Remove Dogecoin explorer urls
* Update tx urls in gui to point to the Friccoin blockchain explorer explorer.friccoin.org

####Documentation

* Generate Friccoin man pages
* Add `--with-gui` to `build-windows.md` instructions
* Change website url to friccoin.org
* Change ticker symbol from `PPC` to `FRC` in `readme.md`, man pages, and `amount.cpp`
* Update `assets-attribution.md`
* Update `gen-manpages.sh` to target the bash shell
* Update readme files to correct urls and Bonc icon/text. Remove references to Friccoin in the Dogecoin release notes. Move Dogecoin release notes to new `release-notes/dogecoin` folder.
* Add link to official community Discord
* Update `FAQ.md` to reflect Friccoin changes
* Update `README_windows.txt` to point to the Dogecoin wiki (The wiki for Dogecoin is a good guide for Friccoin as well)
* Change Dogecoin addresses to Friccoin addresses in help text.
* Translate `readme.md` pages