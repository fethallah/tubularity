/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class FijiITKInterface_MultiScaleTubularityMeasure */

#ifndef _Included_FijiITKInterface_MultiScaleTubularityMeasure
#define _Included_FijiITKInterface_MultiScaleTubularityMeasure
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     FijiITKInterface_MultiScaleTubularityMeasure
 * Method:    GetPath
 * Signature: ([F)I
 */
JNIEXPORT jint JNICALL Java_FijiITKInterface_MultiScaleTubularityMeasure_GetPath
  (JNIEnv *, jobject, jfloatArray);

/*
 * Class:     FijiITKInterface_MultiScaleTubularityMeasure
 * Method:    FindPath
 * Signature: ([F[I[I[FIIIIDDD)I
 */
JNIEXPORT jint JNICALL Java_FijiITKInterface_MultiScaleTubularityMeasure_FindPath
  (JNIEnv *, jobject, jfloatArray, jintArray, jintArray, jfloatArray, jint, jint, jint, jint, jdouble, jdouble, jdouble);

/*
 * Class:     FijiITKInterface_MultiScaleTubularityMeasure
 * Method:    OrientedFlux
 * Signature: ([B[FIIIIDDDDDI[F[F)I
 */
JNIEXPORT jint JNICALL Java_FijiITKInterface_MultiScaleTubularityMeasure_OrientedFlux
  (JNIEnv *, jobject, jbyteArray, jfloatArray, jint, jint, jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jfloatArray, jfloatArray);

#ifdef __cplusplus
}
#endif
#endif
