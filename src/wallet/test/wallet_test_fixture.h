// Copyright (c) 2016 The Bitcoin Core developers

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

#ifndef IoP_WALLET_TEST_FIXTURE_H
#define IoP_WALLET_TEST_FIXTURE_H

#include "test/test_IoP.h"

/** Testing setup and teardown for wallet.
 */
struct WalletTestingSetup: public TestingSetup {
    WalletTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~WalletTestingSetup();
};

#endif

