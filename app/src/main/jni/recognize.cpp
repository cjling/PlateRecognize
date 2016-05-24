//
// Created by cjling on 16/5/17.
//

#include <jni.h>
#include <com_link_trust_platerecognize_MainActivity.h>
#include "include/easypr.h"

JNIEXPORT jstring JNICALL Java_com_link_1trust_platerecognize_MainActivity_recognize
        (JNIEnv * env, jobject obj) {

        std::vector<std::string> results;
        results = easypr::api::plate_recognize("/sdcard/tst.jpg", NULL, NULL);

        std::string all;
        for(int i = 0; i != results.size(); i++)
        {
            all = all + results[i] + "  ";
        }

        return env->NewStringUTF(all.c_str());
}

