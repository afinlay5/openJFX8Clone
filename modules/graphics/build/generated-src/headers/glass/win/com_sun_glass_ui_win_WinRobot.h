/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_glass_ui_win_WinRobot */

#ifndef _Included_com_sun_glass_ui_win_WinRobot
#define _Included_com_sun_glass_ui_win_WinRobot
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sun_glass_ui_win_WinRobot_MOUSE_LEFT_BTN
#define com_sun_glass_ui_win_WinRobot_MOUSE_LEFT_BTN 1L
#undef com_sun_glass_ui_win_WinRobot_MOUSE_RIGHT_BTN
#define com_sun_glass_ui_win_WinRobot_MOUSE_RIGHT_BTN 2L
#undef com_sun_glass_ui_win_WinRobot_MOUSE_MIDDLE_BTN
#define com_sun_glass_ui_win_WinRobot_MOUSE_MIDDLE_BTN 4L
/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _keyPress
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_win_WinRobot__1keyPress
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _keyRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_win_WinRobot__1keyRelease
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _mouseMove
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_win_WinRobot__1mouseMove
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _mousePress
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_win_WinRobot__1mousePress
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _mouseRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_win_WinRobot__1mouseRelease
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _mouseWheel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_win_WinRobot__1mouseWheel
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _getMouseX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_glass_ui_win_WinRobot__1getMouseX
  (JNIEnv *, jobject);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _getMouseY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_glass_ui_win_WinRobot__1getMouseY
  (JNIEnv *, jobject);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _getPixelColor
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_sun_glass_ui_win_WinRobot__1getPixelColor
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_sun_glass_ui_win_WinRobot
 * Method:    _getScreenCapture
 * Signature: (IIII[I)V
 */
JNIEXPORT void JNICALL Java_com_sun_glass_ui_win_WinRobot__1getScreenCapture
  (JNIEnv *, jobject, jint, jint, jint, jint, jintArray);

#ifdef __cplusplus
}
#endif
#endif