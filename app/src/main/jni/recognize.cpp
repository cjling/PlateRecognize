//
// Created by cjling on 16/5/17.
//

#include <jni.h>
#include <com_link_trust_platerecognize_PlateRecognizeLib.h>
#include "include/easypr.h"

JNIEXPORT jlong JNICALL Java_com_link_1trust_platerecognize_PlateRecognizeLib_InitSVM
  (JNIEnv * env, jobject obj, jstring svm_path)
  {
        jlong rel = 0;
        return rel;
  }

JNIEXPORT jlong JNICALL Java_com_link_1trust_platerecognize_PlateRecognizeLib_InitANN
  (JNIEnv * env, jobject obj, jstring ann_path)
  {
        jlong rel = 0;
        return rel;
  }

JNIEXPORT jstring JNICALL Java_com_link_1trust_platerecognize_PlateRecognizeLib_Recongize1
  (JNIEnv * env, jobject obj, jstring ann_path, jstring svm_path, jstring img_path)
  {
        easypr::kDefaultSvmPath = "/sdcard/svm.xml";
        easypr::kDefaultSvmPath = "/sdcard/svm.xml";

        std::vector<std::string> results;
        results = easypr::api::plate_recognize("/sdcard/tst.jpg", NULL, NULL);

        std::string all;
        for(int i = 0; i != results.size(); i++)
        {
            all = all + results[i] + "  ";
        }

        return env->NewStringUTF(all.c_str());
  }

JNIEXPORT jstring JNICALL Java_com_link_1trust_platerecognize_PlateRecognizeLib_Recongize2
  (JNIEnv * env, jobject obj, jstring ann_path, jstring svm_path, jlong img_data)
  {
        return env->NewStringUTF("ok");
  }

JNIEXPORT jstring JNICALL Java_com_link_1trust_platerecognize_PlateRecognizeLib_Recognize3
  (JNIEnv * env, jobject obj, jlong ann_data, jlong svm_data, jlong img_data)
  {
        return env->NewStringUTF("ok");
  }
