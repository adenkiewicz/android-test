1. Install Android-L (API 21) SDK/NDK. Add ndk-dir to $PATH
2. Go to `src/jni` and type `ndk-build`
3. Copy to device: `adb push ../libs/armeabi-v7a/android-test /data/data/somewhere/android-test && adb shell /data/data/somewhere/android-test`
