/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JNIinterface */

#ifndef _Included_JNIinterface
#define _Included_JNIinterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JNIinterface
 * Method:    cocoGetProblem
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_JNIinterface_cocoGetProblem
    (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     JNIinterface
 * Method:    cocoObserveProblem
 * Signature: (Ljava/lang/String;JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_JNIinterface_cocoObserveProblem
    (JNIEnv *, jclass, jstring, jlong, jstring);
    
/*
 * Class:     JNIinterface
 * Method:    cocoFreeProblem
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_JNIinterface_cocoFreeProblem
    (JNIEnv *, jclass, jlong);

/*
 * Class:     JNIinterface
 * Method:    cocoEvaluateFunction
 * Signature: (LProblem;[D)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_JNIinterface_cocoEvaluateFunction
    (JNIEnv *, jclass, jobject, jdoubleArray);

/*
 * Class:     JNIinterface
 * Method:    cocoGetNumberOfVariables
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_JNIinterface_cocoGetNumberOfVariables
    (JNIEnv *, jclass, jlong);

/*
 * Class:     JNIinterface
 * Method:    cocoGetNumberOfObjectives
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_JNIinterface_cocoGetNumberOfObjectives
    (JNIEnv *, jclass, jlong);

/*
 * Class:     JNIinterface
 * Method:    cocoGetSmallestValuesOfInterest
 * Signature: (J)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_JNIinterface_cocoGetSmallestValuesOfInterest
    (JNIEnv *, jclass, jlong);

/*
 * Class:     JNIinterface
 * Method:    cocoGetLargestValuesOfInterest
 * Signature: (J)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_JNIinterface_cocoGetLargestValuesOfInteres
    (JNIEnv *, jclass, jlong);
    
/*
 * Class:     JNIinterface
 * Method:    validProblem
 * Signature: (LProblem;)Z
 */
JNIEXPORT jboolean JNICALL Java_JNIinterface_validProblem
    (JNIEnv *, jclass, jlong);
    
/*
 * Class:     JNIinterface
 * Method:    cocoGetProblemId
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JNIinterface_cocoGetProblemId
    (JNIEnv *, jclass, jlong);
    
/*
 * Class:     JNIinterface
 * Method:    cocoGetProblemName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JNIinterface_cocoGetProblemName
    (JNIEnv *, jclass, jlong);
    
/*
 * Class:     JNIinterface
 * Method:    cocoGetEvaluations
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_JNIinterface_cocoGetEvaluations
    (JNIEnv *, jclass, jlong);
    
/*
 * Class:     JNIinterface
 * Method:    cocoNextProblemIndex
 * Signature: (Ljava/lang/String;ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_JNIinterface_cocoNextProblemIndex
    (JNIEnv *, jclass, jstring, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif