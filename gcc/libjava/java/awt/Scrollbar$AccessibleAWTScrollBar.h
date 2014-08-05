
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Scrollbar$AccessibleAWTScrollBar__
#define __java_awt_Scrollbar$AccessibleAWTScrollBar__

#pragma interface

#include <java/awt/Component$AccessibleAWTComponent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Scrollbar;
        class Scrollbar$AccessibleAWTScrollBar;
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleRole;
        class AccessibleStateSet;
        class AccessibleValue;
    }
  }
}

class java::awt::Scrollbar$AccessibleAWTScrollBar : public ::java::awt::Component$AccessibleAWTComponent
{

public: // actually protected
  Scrollbar$AccessibleAWTScrollBar(::java::awt::Scrollbar *);
public:
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet();
  virtual ::javax::accessibility::AccessibleValue * getAccessibleValue();
  virtual ::java::lang::Number * getCurrentAccessibleValue();
  virtual jboolean setCurrentAccessibleValue(::java::lang::Number *);
  virtual ::java::lang::Number * getMinimumAccessibleValue();
  virtual ::java::lang::Number * getMaximumAccessibleValue();
private:
  static const jlong serialVersionUID = -344337268523697807LL;
public: // actually package-private
  ::java::awt::Scrollbar * __attribute__((aligned(__alignof__( ::java::awt::Component$AccessibleAWTComponent)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Scrollbar$AccessibleAWTScrollBar__