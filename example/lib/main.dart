import 'package:flutter/material.dart';

import 'package:buf_flutter/src/rust/api/bitcoin_uri.dart';
import 'package:buf_flutter/src/config.dart';

Future<void> main() async {
  await BufConfig.initializeApp();
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    final bitcoinUri = FfiBufUri.parse(
        uri:
            "bitcoin:1andreas3batLhQa2FawWjeyjCqyBzypd?amount=50&label=Luke-Jr&message=Donation%20for%20project%20xyz");

    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(title: const Text('Bitcoin URI Parser')),
        body: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text('Address: ${bitcoinUri.address()}'),
              const SizedBox(height: 10),
              Text('Amount (sats): ${bitcoinUri.amountSats()}'),
            ],
          ),
        ),
      ),
    );
  }
}
