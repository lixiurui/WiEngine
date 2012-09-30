/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_MenuItemLabel */

#ifndef _Included_com_wiyun_engine_nodes_MenuItemLabel
#define _Included_com_wiyun_engine_nodes_MenuItemLabel
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_nodes_MenuItemLabel_INVALID_TAG
#define com_wiyun_engine_nodes_MenuItemLabel_INVALID_TAG -1L
#undef com_wiyun_engine_nodes_MenuItemLabel_DEFAULT_FONT_SIZE
#define com_wiyun_engine_nodes_MenuItemLabel_DEFAULT_FONT_SIZE 32L
/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    nativeInit
 * Signature: (Lcom/wiyun/engine/utils/TargetSelector;Lcom/wiyun/engine/utils/TargetSelector;Lcom/wiyun/engine/nodes/Node;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_nativeInit
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    getAlpha
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_getAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    nativeSetColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_nativeSetColor
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    nativeGetDisabledColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_nativeGetDisabledColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    nativeSetDisabledColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_nativeSetDisabledColor
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemLabel
 * Method:    setString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemLabel_setString
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
