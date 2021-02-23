//
// Created by neft on 20/02/21.
//

#ifndef CPUMINERANDROID_CPU_MINER_H
#define CPUMINERANDROID_CPU_MINER_H

//extern jmethodID setText;
#include <android/log.h>
//#include "../native-lib.h"
//#include <stdarg.h>
#include <jni.h>
//#include <stdio.h>
typedef struct {
    jobject *tlog;
    JNIEnv *env;
}logobject;

jobject tlogob;
JavaVM* g_jvm;
static JNIEnv* jniENV;
void log_print(logobject *logtext, char *str,...);

int start_miner(int argc, char *argv[], logobject *olog);

//extern jobject logt;



#endif //CPUMINERANDROID_CPU_MINER_H
