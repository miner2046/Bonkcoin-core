<h1 align="center">
<img src="https://i.imgur.com/d9a8NfA.png" alt="Friccoin" width="300"/>
<br/><br/>
Friccoin Core [FRC, B]
</h1>

Selecionar idioma: [EN](./README.md) | [CN](./README_zh_CN.md) | PT | [FA](./README_fa_IR.md) | [VI](./README_vi_VN.md) | [FR](./README_fr_FR.md) | [JA](./README_ja_JP.md) | [DE](./README_de_DE.md)

Friccoin é uma criptomoeda focada na comunidade. Foi criada com um único propósito: construir uma nova comunidade divertida, como a comunidade original do Dogecoin.

Diferente de todas as iterações anteriores, o Friccoin é uma moeda de camada 1. Isso significa que não há piscinas de liquidez para drenar, carteiras em lista negra ou contratos inteligentes confusos. O Friccoin é uma blockchain simples.

Assim como o Dogecoin, o software Friccoin Core permite que qualquer pessoa opere um nó nas redes de blockchain do Friccoin e usa o método de hash Scrypt para o Proof of Work. Ele é adaptado do Bitcoin Core e de outras criptomoedas.

Para informações sobre as taxas padrão usadas na rede Friccoin, por favor consulte a [recomendação de taxas](doc/fee-recommendation.md).

**Website:** [friccoin.org](https://friccoin.org)

## Diferenças do Dogecoin

O Friccoin é um fork do Dogecoin. Para fins de familiaridade, tentaremos manter o Friccoin semelhante ao Dogecoin.

Mudanças:

* Endereços começam com `B` em vez de `D`
* Recursos BIPS começam no bloco gênese
* GUI temático para o Friccoin

## Uso 💻

Para iniciar sua jornada com o Friccoin Core, veja o [guia de instalação](INSTALL.md) e o tutorial [começando](doc/getting-started.md).

A API JSON-RPC fornecida pelo Friccoin Core é autoexplicativa e pode ser navegada com `friccoin-cli help`, enquanto informações detalhadas para cada comando podem ser visualizadas com `friccoin-cli help <comando>`. Alternativamente, veja a [documentação do Bitcoin Core](https://developer.bitcoin.org/reference/rpc/) - que implementa um protocolo semelhante - para obter uma versão navegável.

### Portas

O Friccoin Core, por padrão, usa a porta `4327` para comunicação peer-to-peer que é necessária para sincronizar a blockchain "mainnet" e se manter informado sobre novas transações e blocos. Adicionalmente, uma porta JSONRPC pode ser aberta, que por padrão é a porta `4326` para nós mainnet. É altamente recomendável não expor as portas RPC na internet pública.

| Função | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   4327 |   14328 |   14329 |
| RPC      |   4326 |   15613 |   15614 |

## Desenvolvimento contínuo 💻

O Friccoin Core é um software de código aberto e orientado pela comunidade. O processo de desenvolvimento é aberto e publicamente visível; qualquer um pode ver, discutir e trabalhar no software.

Principais recursos de desenvolvimento:

* [Projetos do GitHub](https://github.com/Friccoin/Friccoin-core/projects) são usados para seguir o trabalho planejado e em progresso para futuros lançamentos.
* [Discussão do GitHub](https://github.com/Friccoin/Friccoin-core/discussions) é usada para discutir recursos, planejados e não planejados, relacionados tanto ao desenvolvimento do software Friccoin Core, quanto aos protocolos subjacentes e o ativo FRC.

### Estratégia de versão
Os números de versão seguem a semântica ```principal.menor.correção```.

### Branches
Existem 3 tipos de branches neste repositório:

- **master:** Estável, contém a versão mais recente do último lançamento *principal.menor*.
- **manutenção:** Estável, contém a versão mais recente de lançamentos anteriores, que ainda estão sob manutenção ativa. Formato: ```<versão>-manut```
- **desenvolvimento:** Instável, contém novo código para lançamentos planejados. Formato: ```<versão>-dev```

*Os branches master e de manutenção são exclusivamente mutáveis por lançamento. Lançamentos planejados sempre terão um branch de desenvolvimento e pull requests devem ser submetidos contra esses. Branches de manutenção são apenas para **correções de bugs,*** por favor, submeta novos recursos contra o branch de desenvolvimento com a versão mais alta.

## Contribuindo 🤝

Se você encontrar um bug ou tiver problemas com este software, por favor, relate usando o [sistema de problemas](https://github.com/Friccoin/Friccoin-core/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Por favor, veja [o guia de contribuição](CONTRIBUTING.md) para saber como você pode participar do desenvolvimento do Friccoin Core. Muitas vezes há [tópicos buscando ajuda](https://github.com/Friccoin/Friccoin-core/labels/help%20wanted) onde suas contribuições terão alto impacto e serão muito apreciadas.

## Comunidades 🐸

Você pode se juntar às comunidades em diferentes mídias sociais.
Para ver o que está acontecendo, conhecer pessoas e discutir, encontrar o último meme, aprender sobre o Friccoin, dar ou pedir ajuda, para compartilhar seu projeto.

Aqui estão alguns lugares para visitar:


* [Discord](https://discord.gg/rqtkgwsk6j)
* [Telegram](https://t.me/fricscoin)
* [Twitter/X](https://x.com/friccoinpow)

## Perguntas Frequentes ❓

Você tem uma pergunta sobre o Friccoin? A resposta pode estar na [FAQ](doc/FAQ.md) ou na [seção de Perguntas e Respostas](https://github.com/Friccoin/Friccoin-core/discussions/categories/q-a) do quadro de discussão!

## Licença ⚖️
O Friccoin Core é lançado sob os termos da licença MIT. Veja
[COPYING](COPYING) para mais informações ou veja
[opensource.org](https://opensource.org/licenses/MIT)
