#include "com_wiyun_engine_actions_grid_BottomLineShrinkOut.h"
#include "wyBottomLineShrinkOut.h"

extern jfieldID g_fid_BaseObject_mPointer;

JNIEXPORT void JNICALL Java_com_wiyun_engine_actions_grid_BottomLineShrinkOut_nativeInit
  (JNIEnv * env, jobject thiz, jfloat duration, jint gridX, jint gridY) {
	wyBottomLineShrinkOut* g = WYNEW wyBottomLineShrinkOut(duration, gridX, gridY);
	env->SetIntField(thiz, g_fid_BaseObject_mPointer, (jint)g);
	wyObjectAutoRelease(g);
}
