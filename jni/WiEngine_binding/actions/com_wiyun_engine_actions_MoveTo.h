/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_actions_MoveTo */

#ifndef _Included_com_wiyun_engine_actions_MoveTo
#define _Included_com_wiyun_engine_actions_MoveTo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_actions_MoveTo
 * Method:    nativeInit
 * Signature: (FFFFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveTo_nativeInit
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_actions_MoveTo
 * Method:    setPinPoint
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveTo_setPinPoint
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_actions_MoveTo
 * Method:    nativeGetPinPoint
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveTo_nativeGetPinPoint
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_actions_MoveTo
 * Method:    clearPinPoint
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveTo_clearPinPoint
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_actions_MoveTo
 * Method:    setPinAngleDelta
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_MoveTo_setPinAngleDelta
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_actions_MoveTo
 * Method:    getPinAngleDelta
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_actions_MoveTo_getPinAngleDelta
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
