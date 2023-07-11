#ifndef GUILIB_GLOBAL_H
#define GUILIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GUILIB_LIBRARY)
#  define GUILIB_EXPORT Q_DECL_EXPORT
#else
#  define GUILIB_EXPORT Q_DECL_IMPORT
#endif

#endif // GUILIB_GLOBAL_H
