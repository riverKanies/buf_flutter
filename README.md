# buf_flutter

## steps to create project:

- `flutter_rust_bridge_codegen create my_app`
- run example app to test (in vscode navigate to lib/main.dart and click run button at top right - make sure simulator is selected bottom left)
- add file rust/src/api/bitcoin_uri.rs (won't compile until you re-generate)
- !!! important !!! to get the rust code to compile, you need to re-generate after adding the file! this is a weird circular dependency thing because the bitcoin_uri.rs file depends on the frb_generated.rs file, but the frb_generated.rs file is generated based on the bitcoin_uri.rs file.
- flutter_rust_bridge_codegen generate
- I then had issues in dart code where it referenced `RustLib` I changed to `core` (noticed that had changed in the generated code)
- I also had to add ffigen to dev_dependencies in pubspec.yaml

## Next steps
ultimately I need to convert this from a dart app to a package similar to this template:
`flutter create --template=plugin_ffi --platforms=android,ios --org=org.payjoin bitcoin_uri_flutter`




# Usage

Be sure to initialize the package

```dart example of how to initialize the package
import 'package:buf_flutter/src/config.dart';

Future<void> main() async {
  await BufConfig.initializeApp();
  runApp(const MyApp());
}
```


# old README
A new Flutter project.

## Getting Started

This project is a starting point for a Flutter application.

A few resources to get you started if this is your first Flutter project:

- [Lab: Write your first Flutter app](https://docs.flutter.dev/get-started/codelab)
- [Cookbook: Useful Flutter samples](https://docs.flutter.dev/cookbook)

For help getting started with Flutter development, view the
[online documentation](https://docs.flutter.dev/), which offers tutorials,
samples, guidance on mobile development, and a full API reference.
