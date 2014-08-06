/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wizzardo_epoll_EpollCore */

#ifndef _Included_com_wizzardo_epoll_EpollCore
#define _Included_com_wizzardo_epoll_EpollCore
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wizzardo_epoll_EpollCore_MIN_PRIORITY
#define com_wizzardo_epoll_EpollCore_MIN_PRIORITY 1L
#undef com_wizzardo_epoll_EpollCore_NORM_PRIORITY
#define com_wizzardo_epoll_EpollCore_NORM_PRIORITY 5L
#undef com_wizzardo_epoll_EpollCore_MAX_PRIORITY
#define com_wizzardo_epoll_EpollCore_MAX_PRIORITY 10L
/*
 * Class:     com_wizzardo_epoll_EpollCore
 * Method:    listen
 * Signature: (Ljava/lang/String;ILjava/nio/ByteBuffer;)J
 */
JNIEXPORT void JNICALL Java_com_wizzardo_epoll_EpollCore_listen
  (JNIEnv *, jobject, jlong, jstring, jstring);


JNIEXPORT jint JNICALL Java_com_wizzardo_epoll_EpollCore_acceptConnections
  (JNIEnv *, jobject, jlong);


JNIEXPORT jlong JNICALL Java_com_wizzardo_epoll_EpollCore_init
  (JNIEnv *, jobject, jint, jobject);

JNIEXPORT jboolean JNICALL Java_com_wizzardo_epoll_EpollCore_attach
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_wizzardo_epoll_EpollCore
 * Method:    stopListening
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_wizzardo_epoll_EpollCore_stopListening
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_wizzardo_epoll_EpollCore
 * Method:    waitForEvents
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_wizzardo_epoll_EpollCore_waitForEvents
  (JNIEnv *, jobject, jlong, jint);

JNIEXPORT jboolean JNICALL Java_com_wizzardo_epoll_EpollCore_mod
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     com_wizzardo_epoll_EpollCore
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wizzardo_epoll_EpollCore_close
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wizzardo_epoll_EpollCore
 * Method:    read
 * Signature: (IJII)I
 */
JNIEXPORT jint JNICALL Java_com_wizzardo_epoll_EpollCore_read
  (JNIEnv *, jobject, jint, jlong, jint, jint);

/*
 * Class:     com_wizzardo_epoll_EpollCore
 * Method:    write
 * Signature: (IJII)I
 */
JNIEXPORT jint JNICALL Java_com_wizzardo_epoll_EpollCore_write
  (JNIEnv *, jobject, jint, jlong, jint, jint);

/*
 * Class:     com_wizzardo_epoll_EpollCore
 * Method:    getAddress
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_wizzardo_epoll_EpollCore_getAddress
  (JNIEnv *, jclass, jobject);


JNIEXPORT jint JNICALL Java_com_wizzardo_epoll_EpollCore_connect
  (JNIEnv *, jclass, jlong, jstring ,jint);

#ifdef __cplusplus
}
#endif
#endif
