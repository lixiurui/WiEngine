/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_opengl_TextureAtlas */

#ifndef _Included_com_wiyun_engine_opengl_TextureAtlas
#define _Included_com_wiyun_engine_opengl_TextureAtlas
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_opengl_TextureAtlas_DEFAULT_CAPACITY
#define com_wiyun_engine_opengl_TextureAtlas_DEFAULT_CAPACITY 29L
/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getTotalQuads
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getTotalQuads
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getNextAvailableIndex
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getNextAvailableIndex
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getCapacity
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getCapacity
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    nativeGetTexture
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_nativeGetTexture
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    setTexture
 * Signature: (Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_setTexture
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    isWithColorArray
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_isWithColorArray
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    nativeNew
 * Signature: (Lcom/wiyun/engine/opengl/Texture2D;I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_nativeNew
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    updateQuad
 * Signature: (Lcom/wiyun/engine/types/WYQuad2D;Lcom/wiyun/engine/types/WYQuad3D;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_updateQuad
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    updateColor
 * Signature: (Lcom/wiyun/engine/types/WYColor4B;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_updateColor
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    appendQuad
 * Signature: (Lcom/wiyun/engine/types/WYQuad2D;Lcom/wiyun/engine/types/WYQuad3D;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_appendQuad
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    insertQuad
 * Signature: (Lcom/wiyun/engine/types/WYQuad2D;Lcom/wiyun/engine/types/WYQuad3D;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_insertQuad
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    removeQuad
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_removeQuad
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    removeQuads
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_removeQuads
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    removeAllQuads
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_removeAllQuads
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    resizeCapacity
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_resizeCapacity
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getPixelHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getPixelHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getPixelWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getPixelWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getHeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getHeightScale
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getHeightScale
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    getWidthScale
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_getWidthScale
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    draw
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_draw__
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    drawOne
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_drawOne
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    draw
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_draw__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    setColor
 * Signature: (Lcom/wiyun/engine/types/WYColor4B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_setColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor4B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    copyTo
 * Signature: (ILcom/wiyun/engine/opengl/TextureAtlas;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_copyTo__ILcom_wiyun_engine_opengl_TextureAtlas_2
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_wiyun_engine_opengl_TextureAtlas
 * Method:    copyTo
 * Signature: (ILcom/wiyun/engine/types/WYQuad2D;Lcom/wiyun/engine/types/WYQuad3D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_TextureAtlas_copyTo__ILcom_wiyun_engine_types_WYQuad2D_2Lcom_wiyun_engine_types_WYQuad3D_2
  (JNIEnv *, jobject, jint, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
