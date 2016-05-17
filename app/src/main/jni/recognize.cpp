//
// Created by cjling on 16/5/17.
//

#include <jni.h>
#include <com_link_trust_platerecognize_MainActivity.h>

JNIEXPORT jstring JNICALL Java_com_link_1trust_platerecognize_MainActivity_recognize
        (JNIEnv * env, jobject obj) {
    return env->NewStringUTF("successfully!");
}