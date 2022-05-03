@@ -0,0 +1,34 @@
 // Copyright © 2017-2021 Trust Wallet.
 //
 // This file is part of Trust. The full Trust copyright notice, including
 // terms governing use, modification, and redistribution, is contained in the
 // file LICENSE at the root of the source code distribution tree.
 //
 // This is a GENERATED FILE, changes made here MAY BE LOST.
 // Generated one-time (codegen/bin/cointests)
 //

 #include "../interface/TWTestUtilities.h"
 #include <TrustWalletCore/TWCoinTypeConfiguration.h>
 #include <gtest/gtest.h>


 TEST(TWMeterCoinType, TWCoinType) {
     auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeMeter));
     auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x95ecd819d3fde4cd914ed1f5aba174f416b08d026b7ced00a93c370976a284f3"));
     auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeMeter, txId.get()));
     auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x9340e604bd353bd2f90693188c0c829a721dec3b"));
     auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeMeter, accId.get()));
     auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeMeter));
     auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeMeter));

     ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeMeter), 18);
     ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeMeter));
     ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeMeter));
     ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeMeter));
     assertStringsEqual(symbol, "METER");
     assertStringsEqual(txUrl, "https://explorer.meter.io/tx/0x95ecd819d3fde4cd914ed1f5aba174f416b08d026b7ced00a93c370976a284f3");
     assertStringsEqual(accUrl, "https://explorer.meter.io/address/0x9340e604bd353bd2f90693188c0c829a721dec3b");
     assertStringsEqual(id, "meter");
     assertStringsEqual(name, "Meter Stable");
 }