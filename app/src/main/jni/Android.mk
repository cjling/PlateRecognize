LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

OPENCV_CAMERA_MODULES:=on
OPENCV_INSTALL_MODULES:=on
# OPENCV_LIB_TYPE:=STATIC
OPENCV_LIB_TYPE:=SHARED

include /Users/cjling/proj/OpenCV-android-sdk/sdk/native/jni/OpenCV.mk


LOCAL_MODULE := recognize

FILE_LIST := $(wildcard $(LOCAL_PATH)/core/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/preprocess/*.cpp)
FILE_LIST += $(wildcard $(LOCAL_PATH)/util/*.cpp)
FILE_LIST += recognize.cpp

LOCAL_SRC_FILES := $(FILE_LIST:$(LOCAL_PATH)/%=%)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include
# LOCAL_SRC_FILES := recognize.cpp
LOCAL_LDLIBS += -lm -llog

include $(BUILD_SHARED_LIBRARY)