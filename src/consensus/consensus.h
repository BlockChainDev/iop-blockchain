// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers 
// Copyright (c) 2017 IoP Ventures LLC

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#ifndef IoP_CONSENSUS_CONSENSUS_H
#define IoP_CONSENSUS_CONSENSUS_H

#include <stdint.h>

/** The maximum allowed size for a serialized block, in bytes (only for buffer size limits) */
static const unsigned int MAX_BLOCK_SERIALIZED_SIZE = 4000000;
/** The maximum allowed weight for a block, see BIP 141 (network rule) */
static const unsigned int MAX_BLOCK_WEIGHT = 4000000;
/** The maximum allowed size for a block excluding witness data, in bytes (network rule) */
static const unsigned int MAX_BLOCK_BASE_SIZE = 1000000;
/** The maximum allowed number of signature check operations in a block (network rule) */
static const int64_t MAX_BLOCK_SIGOPS_COST = 80000;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 100;

/** Flags for nSequence and nLockTime locks */
enum {
    /* Interpret sequence numbers as relative lock-time constraints. */
    LOCKTIME_VERIFY_SEQUENCE = (1 << 0),

    /* Use GetMedianTimePast() instead of nTime for end point timestamp. */
    LOCKTIME_MEDIAN_TIME_PAST = (1 << 1),
};

#endif // IoP_CONSENSUS_CONSENSUS_H
