/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_utils_ZwoptexManager */

#ifndef _Included_com_wiyun_engine_utils_ZwoptexManager
#define _Included_com_wiyun_engine_utils_ZwoptexManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    addZwoptex
 * Signature: (Ljava/lang/String;ILcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_addZwoptex__Ljava_lang_String_2ILcom_wiyun_engine_opengl_Texture2D_2
  (JNIEnv *, jclass, jstring, jint, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    hasZwoptex
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_hasZwoptex
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    getFrameNames
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_getFrameNames
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    addZwoptex
 * Signature: (Ljava/lang/String;Ljava/lang/String;ZLcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_addZwoptex__Ljava_lang_String_2Ljava_lang_String_2ZLcom_wiyun_engine_opengl_Texture2D_2
  (JNIEnv *, jclass, jstring, jstring, jboolean, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    addZwoptex
 * Signature: (Ljava/lang/String;Ljava/lang/String;ZLcom/wiyun/engine/opengl/Texture2D;F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_addZwoptex__Ljava_lang_String_2Ljava_lang_String_2ZLcom_wiyun_engine_opengl_Texture2D_2F
  (JNIEnv *, jclass, jstring, jstring, jboolean, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeGetFrameRect
 * Signature: (Ljava/lang/String;Ljava/lang/String;Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeGetFrameRect__Ljava_lang_String_2Ljava_lang_String_2Lcom_wiyun_engine_types_WYRect_2
  (JNIEnv *, jclass, jstring, jstring, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeGetFrameRect
 * Signature: (Ljava/lang/String;Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeGetFrameRect__Ljava_lang_String_2Lcom_wiyun_engine_types_WYRect_2
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    getFrameCount
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_getFrameCount
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeGetFrameRects
 * Signature: (Ljava/lang/String;[Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeGetFrameRects
  (JNIEnv *, jclass, jstring, jobjectArray);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeGetSpriteFrame
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeGetSpriteFrame__Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeGetSpriteFrame
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeGetSpriteFrame__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeMakeSprite
 * Signature: (Ljava/lang/String;Ljava/lang/String;Lcom/wiyun/engine/opengl/Texture2D;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeMakeSprite__Ljava_lang_String_2Ljava_lang_String_2Lcom_wiyun_engine_opengl_Texture2D_2
  (JNIEnv *, jclass, jstring, jstring, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeMakeButton
 * Signature: (Ljava/lang/String;Ljava/lang/String;Lcom/wiyun/engine/utils/TargetSelector;Lcom/wiyun/engine/opengl/Texture2D;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeMakeButton__Ljava_lang_String_2Ljava_lang_String_2Lcom_wiyun_engine_utils_TargetSelector_2Lcom_wiyun_engine_opengl_Texture2D_2
  (JNIEnv *, jclass, jstring, jstring, jobject, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeMakeSpriteEx
 * Signature: (Ljava/lang/String;Ljava/lang/String;Lcom/wiyun/engine/opengl/Texture2D;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeMakeSpriteEx__Ljava_lang_String_2Ljava_lang_String_2Lcom_wiyun_engine_opengl_Texture2D_2
  (JNIEnv *, jclass, jstring, jstring, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    setZwoptexTexture
 * Signature: (Ljava/lang/String;Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_setZwoptexTexture
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    removeZwoptex
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_removeZwoptex
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    removeAllZwoptex
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_removeAllZwoptex
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeMakeSprite
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeMakeSprite__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeMakeButton
 * Signature: (Ljava/lang/String;Lcom/wiyun/engine/utils/TargetSelector;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeMakeButton__Ljava_lang_String_2Lcom_wiyun_engine_utils_TargetSelector_2
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_wiyun_engine_utils_ZwoptexManager
 * Method:    nativeMakeSpriteEx
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_utils_ZwoptexManager_nativeMakeSpriteEx__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
