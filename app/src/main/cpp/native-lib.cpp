#include <jni.h>
#include <string>

extern "C" {
#include <libavutil/avutil.h>
}


extern "C" JNIEXPORT jstring JNICALL

Java_com_example_javac_ffmpegdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++0000000";
    return env->NewStringUTF(av_version_info());
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_javac_ffmpegdemo_MainActivity_intFromJNI(JNIEnv *env, jobject instance) {
    return 8888;

}