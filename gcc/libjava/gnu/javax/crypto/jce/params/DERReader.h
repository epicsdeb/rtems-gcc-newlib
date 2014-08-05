
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_jce_params_DERReader__
#define __gnu_javax_crypto_jce_params_DERReader__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace jce
        {
          namespace params
          {
              class DERReader;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
  }
}

class gnu::javax::crypto::jce::params::DERReader : public ::java::lang::Object
{

public:
  DERReader();
  DERReader(JArray< jbyte > *);
  virtual void init(::java::lang::String *);
  virtual void init(JArray< jbyte > *);
  virtual jboolean hasMorePrimitives();
  virtual ::java::math::BigInteger * getBigInteger();
private:
  JArray< jbyte > * getPrimitive();
  jint translateLeadIdentifierByte(jbyte);
  jint getIdentifier(jint);
public: // actually package-private
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) source;
  jint pos;
  static const jint UNIVERSAL = 1;
  static const jint APPLICATION = 2;
  static const jint CONTEXT_SPECIFIC = 3;
  static const jint PRIVATE = 4;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_jce_params_DERReader__