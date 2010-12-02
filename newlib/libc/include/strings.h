/*
 * strings.h
 *
 * Definitions for string operations.
 */

#ifndef _STRINGS_H_
#define _STRINGS_H_

#include "_ansi.h"
#include <sys/reent.h>

#include <sys/types.h> /* for size_t */
#include <locale.h> /* for locale_t */

_BEGIN_STD_C

#ifndef __STRICT_ANSI__
/* 
 * Marked LEGACY in Open Group Base Specifications Issue 6/IEEE Std 1003.1-2004
 * Removed from Open Group Base Specifications Issue 7/IEEE Std 1003.1-2008
 */
int	 _EXFUN(bcmp,(const void *, const void *, size_t));
void	 _EXFUN(bcopy,(const void *, void *, size_t));
void	 _EXFUN(bzero,(void *, size_t));
char 	*_EXFUN(index,(const char *, int));
char 	*_EXFUN(rindex,(const char *, int));
#endif /* ! __STRICT_ANSI__ */

int	 _EXFUN(ffs,(int));
int	 _EXFUN(strcasecmp,(const char *, const char *));
#if 0
/* Not implemented */
int	 _EXFUN(strcasecmp_l,(const char *, const char *, locale_t));
#endif
int	 _EXFUN(strncasecmp,(const char *, const char *, size_t));
#if 0
/* Not implemented */
int	 _EXFUN(strncasecmp_l,(const char *, const char *, size_t, locale_t));
#endif

_END_STD_C

#endif /* _STRINGS_H_ */
