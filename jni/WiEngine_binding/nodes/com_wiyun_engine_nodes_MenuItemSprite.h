/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_MenuItemSprite */

#ifndef _Included_com_wiyun_engine_nodes_MenuItemSprite
#define _Included_com_wiyun_engine_nodes_MenuItemSprite
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_nodes_MenuItemSprite_DEFAULT_FONT_SIZE
#define com_wiyun_engine_nodes_MenuItemSprite_DEFAULT_FONT_SIZE 32L
/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    nativeInit
 * Signature: (Lcom/wiyun/engine/utils/TargetSelector;Lcom/wiyun/engine/utils/TargetSelector;Lcom/wiyun/engine/nodes/Sprite;Lcom/wiyun/engine/nodes/Sprite;Lcom/wiyun/engine/nodes/Sprite;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_nativeInit
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    getAlpha
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_getAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    nativeSetColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_nativeSetColor
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    getBlendFuncSrc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_getBlendFuncSrc
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    getBlendFuncDst
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_getBlendFuncDst
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    setBlendFunc
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_setBlendFunc
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_MenuItemSprite
 * Method:    nativeAutoReleaseStateSprites
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_MenuItemSprite_nativeAutoReleaseStateSprites
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
