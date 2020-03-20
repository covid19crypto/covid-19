// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019, Car Dash Ian Coin Developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2018-2019, The DeroGold Assosiation
// Copyright (c) 2018-2019, The BitcoinMono Developers
// Copyright (c) 2020 The COVID-19 Developers
// Please see the included LICENSE file for more information


#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {

{  10, "762358609d252c9b9f89f32fc54b593e7ab2474cdf0a53028765ccd6636a9268"},
{  50, "758ea01cb30d8e4e6ab306869351bbbf4c2f913b6e3bd50fddddd50c69640604"},
{  100, "14c2551a74f32e95d519467d64735ea46b5a5d937c06372fbe0d2eeb898c8e38"},
{  250, "41203c6011605d327272349ebb4674bcca1a0681870cc50f48a7c9708d4c6dd1"},
{  500, "ab149a1d00e0577150a57b8dd32d24a296c1d04406393ebf4d83fec1f09e8d11"},
{  1000, "23968f62227f2e0dd2bf83b4b1949c672723857f2019aa03d43ff468430b457b"},
{  1500, "64ec73adddda26a8409bf23c3dfe96aa9a4af6c20cb83b32af1428cb3b2ac46a"},
{  2000, "9e4d141490cc457725bfa0f0e3b6abd4f32787a5aa85c47194acc5399faf4983"},
{  2500, "1e4d3f67f94c35ed84d861bf51e952b90009e11d50f3829254eeb22e5c0b42d8"},
{  2600, "f1e2bd71b8166bde1a0167ea69f351515348dba78b7b697825740a7daa18840e"}
};
} // namespace CryptoNote
