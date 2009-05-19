#ifndef INCLUDED_haxe_CppInt32__
#define INCLUDED_haxe_CppInt32__

#include <hxObject.h>

namespace cpp
{


class CppInt32__
{
public:
   CppInt32__(int inX=0) : mValue(inX) { }
   CppInt32__(const null &inNull) : mValue(0) { }
   CppInt32__(const Dynamic &inD) : mValue(inD->__ToInt()) { }
   operator int() const { return mValue; }

   static inline CppInt32__ make(int a,int b) { return CppInt32__( (a<<16) | b ); }
   static inline CppInt32__ ofInt(int a) { return CppInt32__( a ); }
   static inline int toInt(CppInt32__ a) { hxCheckOverflow(a); return a.mValue; }
   static inline CppInt32__ add(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue + b.mValue  ); }
   static inline CppInt32__ sub(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue - b.mValue  ); }
   static inline CppInt32__ mul(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue * b.mValue  ); }
   static inline CppInt32__ div(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue / b.mValue  ); }
   static inline CppInt32__ mod(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue % b.mValue  ); }
   static inline CppInt32__ shl(CppInt32__ a,int b) { return CppInt32__( a.mValue << b  ); }
   static inline CppInt32__ shr(CppInt32__ a,int b) { return CppInt32__( a.mValue >> b  ); }
   static inline CppInt32__ ushr(CppInt32__ a,int b) { return CppInt32__( ((unsigned int)a.mValue) >> b  ); }
   static inline CppInt32__ _and(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue & b.mValue  ); }
   static inline CppInt32__ _or(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue | b.mValue  ); }
   static inline CppInt32__ _xor(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue ^ b.mValue  ); }
   static inline CppInt32__ neg(CppInt32__ a) { return CppInt32__( -a.mValue ); }
   static inline CppInt32__ complement(CppInt32__ a) { return CppInt32__( ~a.mValue ); }
   static inline CppInt32__ compare(CppInt32__ a,CppInt32__ b) { return CppInt32__( a.mValue - b.mValue ); }

   inline bool operator==(const CppInt32__ &inRHS) const { return mValue == inRHS.mValue; }

   inline int operator-(CppInt32__ b) { return mValue - b.mValue; }
   inline int operator+(CppInt32__ b) { return mValue + b.mValue; }
   inline int operator*(CppInt32__ b) { return mValue * b.mValue; }
   inline int operator/(CppInt32__ b) { return mValue / b.mValue; }
   inline int operator%(CppInt32__ b) { return mValue % b.mValue; }

   SHARED static Dynamic make_dyn();

   int mValue;
};

typedef CppInt32__ CppInt32___obj;
}





#endif

