
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalFileChooserUI$SingleClickListener__
#define __javax_swing_plaf_metal_MetalFileChooserUI$SingleClickListener__

#pragma interface

#include <java/awt/event/MouseAdapter.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JFileChooser;
        class JList;
        class JTextField;
      namespace plaf
      {
        namespace metal
        {
            class MetalFileChooserUI;
            class MetalFileChooserUI$SingleClickListener;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalFileChooserUI$SingleClickListener : public ::java::awt::event::MouseAdapter
{

public:
  MetalFileChooserUI$SingleClickListener(::javax::swing::plaf::metal::MetalFileChooserUI *, ::javax::swing::JList *);
  virtual void mouseClicked(::java::awt::event::MouseEvent *);
public: // actually package-private
  virtual void editFile(jint);
  virtual void completeEditing();
  ::javax::swing::JList * __attribute__((aligned(__alignof__( ::java::awt::event::MouseAdapter)))) list;
  ::java::io::File * editFile__;
  ::javax::swing::JFileChooser * fc;
  ::java::lang::Object * lastSelected;
  ::javax::swing::JTextField * editField;
  ::javax::swing::plaf::metal::MetalFileChooserUI * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalFileChooserUI$SingleClickListener__
