<h1 align="center">
<img src="https://i.imgur.com/d9a8NfA.png" alt="Friccoin" width="300"/>
<br/><br/>
Friccoin Core [FRC, B]  
</h1>


Sprache ändern: [EN](./README.md) | [CN](./README_zh_CN.md) | [PT](./README_pt_BR.md) | [FA](./README_fa_IR.md) | [VI](./README_vi_VN.md) | [FR](./README_fr_FR.md) | [JA](./README_ja_JP.md) | DE | 



Friccoin ist eine Community-orientierte Kryptowährung. Sie wurde mit einem einzigen Ziel geschaffen: eine neue, spaßige Community wie die ursprüngliche Dogecoin-Community aufzubauen.

Im Gegensatz zu allen vorherigen Iterationen ist Friccoin ein Layer-1 Coin. 
Das bedeutet, es gibt keine Liquiditätspools, keine Sperrung von Wallets und keine verwirrenden Smart Contracts. 
Friccoin ist eine einfache, eigenständige Blockchain.

Die Friccoin Core-Software ermöglicht es jedem, einen Node in den Friccoin-Blockchain-Netzwerken zu betreiben und verwendet die Scrypt-Hashing-Methode für den "Proof of Work". 
Sie wurde aus den Programmen Dogecoin Core, Bitcoin Core und anderen Kryptowährungen angepasst.

Für Informationen zu den Standardgebühren im Friccoin-Netzwerk lesen Sie die [Gebührenempfehlungen](doc/fee-recommendation_DE.md).

**Website:** [friccoin.org](https://friccoin.org)

## Unterschiede zu Dogecoin

Friccoin ist eine Abspaltung von Dogecoin. Um die Vertrautheit zu wahren, werden wir versuchen, Friccoin ähnlich wie Dogecoin zu behandeln.

Änderungen:

* Adressen beginnen mit `B` statt `D`
* BIPS-Funktionen übernommen
* AuxPow Chain ID 63 (Merged Mining aktiviert)
* UI im Fric-Style



## Verwendung 💻

Um Ihre Reise mit Friccoin Core zu beginnen, lesen Sie den [Quick Guide](doc/README_windows_DE.md), [Installationsanweisungen](INSTALL.md) und das [Einrichtungstutorial](doc/getting-started.md).

Die JSON-RPC-API von Friccoin Core ist selbstdokumentierend und kann mit friccoin-cli help durchsucht werden, während detaillierte Informationen zu jedem Befehl mit friccoin-cli help <Befehl> angezeigt werden können. 
Alternativ lesen Sie die [Bitcoin Core Dokumentation](https://developer.bitcoin.org/reference/rpc/) - die ein ähnliches Protokoll implementiert - um eine durchsuchbare Version zu erhalten.

### Ports

Friccoin Core verwendet standardmäßig den Port `14327` für die Peer-to-Peer-Kommunikation, 
die zum Synchronisieren der "mainnet"-Blockchain und zum Informieren über neue Transaktionen und Blöcke benötigt wird. 
Zusätzlich kann ein JSONRPC-Port geöffnet werden, der standardmäßig für Mainnet-Knoten auf Port `15612` eingestellt ist. 
Es wird dringend empfohlen, RPC-Ports nicht dem öffentlichen Internet preiszugeben.

| Function | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   14327 |   14328 |   14329 |
| RPC      |   15612 |   15613 |   15614 |

## Fortlaufende Entwicklung 💻

Friccoin Core ist eine Open-Source- und Community-getriebene Software. 
Der Entwicklungsprozess ist offen und öffentlich einsehbar; jeder kann die Software sehen, darüber diskutieren und daran arbeiten.


Hauptentwicklungsressourcen:

* [GitHub Projekte](https://github.com/Friccoin/Friccoin-core/projects) werden verwendet,
 um geplante und laufende Arbeiten für bevorstehende Veröffentlichungen zu verfolgen.

* [GitHub Discussion](https://github.com/Friccoin/Friccoin-core/discussions) wird genutzt, 
  um Features (geplante und ungeplante) zu diskutieren die mit der Entwicklung der Friccoin Core-Software, den zugrunde liegenden Protokollen und dem FRC-Vermögenswert zusammenhängen.




### Versionsstrategie

Versionsnummern folgen dem Schema ```major.minor.patch```.

### Branches

Es gibt 3 Arten von Branches in diesem Repository:

- **master**: Stabil, enthält die neueste Version der letzten *major.minor* Veröffentlichung.
- **maintenance**: Stabil, enthält die neueste Version früherer Veröffentlichungen, die noch aktiv gewartet werden. Format: <version>-maint
- **development**: Instabil, enthält neuen Code für geplante Veröffentlichungen. Format: ```<version>-dev```

*Master- und Wartungs-Branches sind ausschließlich durch Veröffentlichungen änderbar.*
*Geplante Veröffentlichungen haben immer einen Entwicklungs-Branch, und Pull Requests sollten gegen diese eingereicht werden.*
*Wartungs-Branches sind **nur für Bugfixes gedacht,** reichen Sie bitte neue Funktionen gegen den Entwicklungszweig mit der höchsten Version ein.*

## Mitwirken 🤝

Wenn Sie einen Fehler finden oder Probleme mit dieser Software haben, melden Sie dies bitte über das [Report System](https://github.com/Friccoin/Friccoin-core/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Bitte sehen Sie sich den [Beitrag zur Mitwirkung](CONTRIBUTING.md) an, um zu erfahren, wie Sie an der Entwicklung von Friccoin Core teilnehmen können. 
Oft gibt es [Themen, bei denen Hilfe benötigt wird](https://github.com/Friccoin/Friccoin-core/labels/help%20wanted), bei denen Ihre Beiträge einen großen Einfluss haben und sehr geschätzt werden.

## Communities 🐸

Sie können sich der Community in verschiedenen sozialen Medien anschließen, um Leute zu treffen, zu diskutieren, 
die neuesten Fric-Memes zu finden, etwas über Friccoin zu lernen oder um Ideen zu teilen.

Hier sind einige Links:

* [Discord](https://discord.gg/rqtkgwsk6j) Offizieller Friccoin Discord Server
* [Telegram](https://t.me/fricscoin)
* [Twitter/X](https://x.com/friccoinpow)

## Häufig gestellte Fragen ❓

Haben Sie eine Frage zu Friccoin? 
Eine Antwort befindet sich vielleicht bereits im [FAQ](doc/FAQ_DE.md) oder im [Frage-und-Antwort-Bereich](https://github.com/Friccoin/Friccoin-core/discussions/categories/q-a) des Diskussionsforums!

## Lizenz ⚖️
Friccoin Core wird unter den Bedingungen der MIT-Lizenz veröffentlicht. Siehe 
[COPYING](COPYING) für weitere Informationen oder besuchen Sie
[opensource.org](https://opensource.org/licenses/MIT)
