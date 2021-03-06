
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_awt_xlib_XFontPeer__
#define __gnu_awt_xlib_XFontPeer__

#pragma interface

#include <gnu/java/awt/peer/ClasspathFontPeer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace awt
    {
      namespace xlib
      {
          class XFontPeer;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Font;
        class FontMetrics;
      namespace font
      {
          class FontRenderContext;
          class GlyphVector;
          class LineMetrics;
      }
      namespace geom
      {
          class Rectangle2D;
      }
    }
    namespace text
    {
        class CharacterIterator;
    }
  }
}

class gnu::awt::xlib::XFontPeer : public ::gnu::java::awt::peer::ClasspathFontPeer
{

public:
  XFontPeer(::java::lang::String *, jint);
  XFontPeer(::java::lang::String *, jint, jfloat);
  virtual jboolean canDisplay(::java::awt::Font *, jint);
  virtual jint canDisplayUpTo(::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint);
  virtual ::java::awt::font::GlyphVector * createGlyphVector(::java::awt::Font *, ::java::awt::font::FontRenderContext *, ::java::text::CharacterIterator *);
  virtual ::java::awt::font::GlyphVector * createGlyphVector(::java::awt::Font *, ::java::awt::font::FontRenderContext *, JArray< jint > *);
  virtual jbyte getBaselineFor(::java::awt::Font *, jchar);
  virtual ::java::awt::FontMetrics * getFontMetrics(::java::awt::Font *);
  virtual ::java::lang::String * getGlyphName(::java::awt::Font *, jint);
  virtual ::java::awt::font::LineMetrics * getLineMetrics(::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint, ::java::awt::font::FontRenderContext *);
  virtual ::java::awt::geom::Rectangle2D * getMaxCharBounds(::java::awt::Font *, ::java::awt::font::FontRenderContext *);
  virtual jint getMissingGlyphCode(::java::awt::Font *);
  virtual jint getNumGlyphs(::java::awt::Font *);
  virtual ::java::lang::String * getPostScriptName(::java::awt::Font *);
  virtual ::java::awt::geom::Rectangle2D * getStringBounds(::java::awt::Font *, ::java::text::CharacterIterator *, jint, jint, ::java::awt::font::FontRenderContext *);
  virtual ::java::lang::String * getSubFamilyName(::java::awt::Font *, ::java::util::Locale *);
  virtual jboolean hasUniformLineMetrics(::java::awt::Font *);
  virtual ::java::awt::font::GlyphVector * layoutGlyphVector(::java::awt::Font *, ::java::awt::font::FontRenderContext *, JArray< jchar > *, jint, jint, jint);
  static ::java::lang::Class class$;
};

#endif // __gnu_awt_xlib_XFontPeer__
