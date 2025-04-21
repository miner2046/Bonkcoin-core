// Copyright (c) 2012-2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 31800;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 60002;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 70011;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 70012;

//! "feefilter" tells peers to filter invs to you by fee starts with this version
static const int FEEFILTER_VERSION = 70013;

//! short-id-based block download starts with this version
static const int SHORT_IDS_BLOCKS_VERSION = 70014;

//! not banning for invalid compact blocks starts with this version
static const int INVALID_CB_NO_BAN_VERSION = 70015;

//! accept merge mining before block 100k, starting with this version
static const int AUXPOW_BEFORE_100K_VERSION = 70016;

// XXX: Decide if this is appropriate - if we reintroduce alerts we may need
//      to  reduce to 70016
//! disconnect from peers older than this proto version
//! bump this to 70017 to block older peers
//! bumped this to 70017 on March 15 2025
static const int MIN_PEER_PROTO_VERSION = 70017;

//! new halving change starts with this version
static const int HALVING_CHANGES_VERSION = 70017;

//! add dev fee starts with this version
static const int ADD_DEVELOPER_FEE_VERSION = 70019;

//! current protocol version
//! roll back to 70016 if somethings goes wrong
static const int PROTOCOL_VERSION = ADD_DEVELOPER_FEE_VERSION;

#endif // BITCOIN_VERSION_H
