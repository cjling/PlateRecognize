//
// Created by cjling on 16/5/17.
//

#include <jni.h>
#include <com_link_trust_platerecognize_MainActivity.h>
#include "include/easypr.h"

JNIEXPORT jstring JNICALL Java_com_link_1trust_platerecognize_MainActivity_recognize
        (JNIEnv * env, jobject obj) {
    auto results = easypr::api::plate_recognize(NULL, NULL, NULL);
    return env->NewStringUTF("successfully!");
}

