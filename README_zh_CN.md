<h1 align="center">
<img src="https://i.imgur.com/d9a8NfA.png" alt="Friccoin" width="300"/>
<br/><br/>
Friccoin Core [FRC, B]
</h1>

选择语言: [EN](./README.md) | CN | [PT](./README_pt_BR.md) | [FA](./README_fa_IR.md) | [VI](./README_vi_VN.md) | [FR](./README_fr_FR.md) | [JA](./README_ja_JP.md) | [DE](./README_ger_DE.md)

Friccoin 是一个以社区为核心的加密货币。它的诞生只有一个目的：打造一个像最初的 Dogecoin 社区那样新奇又有趣的社区。

与之前的所有版本不同，Friccoin是一个第一层的硬币。这意味着没有流动性池可以耗尽，没有列入黑名单的钱包，也没有令人困惑的智能合约。Friccoin是一个简单的区块链。

就像Dogecoin一样，Friccoin Core软件允许任何人在Friccoin区块链网络中操作节点，并使用Scrypt散列方法进行工作证明。它是从Bitcoin Core和其他加密货币中进行了改编。

有关Friccoin网络上使用的默认费用的信息，请参阅[费用建议](doc/fee-recommendation.md)。

**网站:** [friccoin.org](https://friccoin.org)

## Dogecoin 差异

Friccoin 是 Dogecoin 的一个分支。为了保持熟悉性，我们将尝试使 Friccoin 保持与 Dogecoin 类似。

变化：

* 地址以 `B` 开头，而不是 `D`
* BIPS 特性将从区块 1000 开始
* AuxPow 从区块 1500 开始（链ID：63）
* GUI 针对 Friccoin 进行了主题设计

## 用法 💻

要开始使用Friccoin Core，请参阅[安装指南](INSTALL.md)和[入门教程](doc/getting-started.md)。

Friccoin Core提供的JSON-RPC API是自说明的，可以使用`friccoin-cli help`进行浏览，而每个命令的详细信息可以使用`friccoin-cli help <command>`查看。或者，参阅[比特币核心文档](https://developer.bitcoin.org/reference/rpc/) - 其实施了类似的协议 - 以获得可浏览的版本。

### 端口

Friccoin Core默认使用端口`4327`进行对等通信，这对于同步“主网”区块链并了解新的交易和区块信息是必要的。此外，可以打开一个JSONRPC端口，默认情况下为主网节点的端口`4326`。强烈建议不要将RPC端口暴露在公共互联网上。

| 功能     | 主网    | 测试网  | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   4327 |   14328 |   14329 |
| RPC      |   4326 |   15613 |   15614 |

## 持续发展 💻

Friccoin Core是一个开源的、社区驱动的软件。开发过程是公开的，公开可见；任何人都可以看到、讨论和参与到这个软件中来。

主要的开发资源:

* [GitHub项目](https://github.com/Friccoin/Friccoin-core/projects) 用于跟踪即将发布的版本的计划和正在进行中的工作。
* [GitHub讨论](https://github.com/Friccoin/Friccoin-core/discussions) 用于讨论与Friccoin Core软件的开发、基础协议和FRC资产相关的计划和非计划功能。


### 版本策略
版本号遵循```主版本.次版本.修订版本```的语义。

### 分支
这个存储库中有三种类型的分支:

- **master:** 稳定的，包含最新*主版本.次版本*发布的最新版本。
- **maintenance:** 稳定的，包含之前版本的最新版本，这些版本仍在积极维护中。格式: ```<版本>-maint```
- **development:** 不稳定的，包含计划发布的新代码。格式: ```<版本>-dev```

*Master和maintenance分支只能通过发布来改变。计划中的*
*发布将始终有一个开发分支，拉取请求应提交给那些分支。维护分支仅用于**修复错误，***请将新功能提交给具有最高版本的开发分支。

## 贡献 🤝

如果您发现了错误或在使用此软件时遇到问题，请使用[问题系统](https://github.com/Friccoin/Friccoin-core/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+)报告它。

请参阅[贡献指南](CONTRIBUTING.md)以了解如何参与Friccoin Core的开发。通常会有[寻求帮助的主题](https://github.com/Friccoin/Friccoin-core/labels/help%20wanted)，您的贡献将产生很高的影响并得到很高的评价。

## 社区 🐸

您可以加入不同社交媒体上的社区。要了解正在发生什么，结识人们和讨论，找到最新的模因，了解Friccoin，提供或寻求帮助，分享您的项目。

以下是一些值得参观的地方:


* [Discord](https://discord.gg/rqtkgwsk6j)
* [Telegram](https://t.me/fricscoin)
* [Twitter/X](https://x.com/friccoinpow)

## 常见问题解答 ❓

关于Friccoin是否有问题？答案可能已经在[FAQ](doc/FAQ.md)或讨论板的[Q&A部分](https://github.com/Friccoin/Friccoin-core/discussions/categories/q-a)中。

## 许可证 ⚖️
Friccoin Core根据MIT许可证的条款发布。请参阅[COPYING](COPYING)获取更多信息或参阅[opensource.org](https://opensource.org/licenses/MIT)
