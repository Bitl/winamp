#ifndef NULLSOFT_WAC_DOWNLOADS_GLOBAL_H
#define NULLSOFT_WAC_DOWNLOADS_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(WAC_DOWNLOADS_LIB)
#  define WAC_DOWNLOADS_EXPORT Q_DECL_EXPORT
# else
#  define WAC_DOWNLOADS_EXPORT Q_DECL_IMPORT
# endif
#else
# define WAC_DOWNLOADS_EXPORT
#endif

#endif // !NULLSOFT_WAC_DOWNLOADS_GLOBAL_H