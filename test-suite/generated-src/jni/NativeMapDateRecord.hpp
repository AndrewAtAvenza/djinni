// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#pragma once

#include "djinni_support.hpp"
#include "map_date_record.hpp"

namespace djinni_generated {

class NativeMapDateRecord final {
public:
    using CppType = MapDateRecord;
    using JniType = jobject;

    static jobject toJava(JNIEnv*, MapDateRecord);
    static MapDateRecord fromJava(JNIEnv*, jobject);

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/dropbox/djinni/test/MapDateRecord") };
    const jmethodID jconstructor { djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashMap;)V") };
    const jfieldID field_mDatesById { djinni::jniGetFieldID(clazz.get(), "mDatesById", "Ljava/util/HashMap;") };

private:
    NativeMapDateRecord() {}
    friend class djinni::JniClass<::djinni_generated::NativeMapDateRecord>;
};

}  // namespace djinni_generated
