LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := android-test
LOCAL_SRC_FILES := main.cpp

LOCAL_CPPFLAGS += -std=c++11 -pthread -fPIE -frtti -fexceptions
LOCAL_LDFLAGS += -pie -fPIE
LOCAL_LDLIBS := -llog

include $(BUILD_EXECUTABLE)
