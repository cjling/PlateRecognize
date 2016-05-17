//
// Created by cjling on 16/5/17.
//

#include <jni.h>
#include <com_link_trust_platerecognize_MainActivity.h>
#include <opencv2/opencv.hpp>
using namespace cv;

IplImage * change4channelTo3InIplImage(IplImage * src) {
  if (src->nChannels != 4) {
    return NULL;
  }

  IplImage * destImg = cvCreateImage(cvGetSize(src), IPL_DEPTH_8U, 3);
  for (int row = 0; row < src->height; row++) {
    for (int col = 0; col < src->width; col++) {
      CvScalar s = cvGet2D(src, row, col);
      cvSet2D(destImg, row, col, s);
    }
  }

  return destImg;
}

JNIEXPORT jstring JNICALL Java_com_link_1trust_platerecognize_MainActivity_recognize
        (JNIEnv * env, jobject obj) {
    return env->NewStringUTF("successfully!");
}

