LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

OPENCV_CAMERA_MODULES:=on
OPENCV_INSTALL_MODULES:=on
OPENCV_LIB_TYPE:=STATIC
# OPENCV_LIB_TYPE:=SHARED

include /Users/cjling/proj/OpenCV-android-sdk/sdk/native/jni/OpenCV.mk


LOCAL_MODULE := recognize
LOCAL_SRC_FILES := recognize.cpp
LOCAL_LDLIBS += -lm -llog

include $(BUILD_SHARED_LIBRARY)