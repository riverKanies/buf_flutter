import 'rust/frb_generated.dart';

class BufConfig {
  static Future<void> initializeApp() async {
    try {
      if (!core.instance.initialized) {
        await core.init();
      }
    } catch (e) {
      throw Exception("failed to initialize payjoin");
    }
  }
}
