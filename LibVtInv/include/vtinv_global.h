#ifndef VTINV_GLOBAL_H
#define VTINV_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VTINV_LIBRARY)
#  define VTINVSHARED_EXPORT Q_DECL_EXPORT
#else
#  define VTINVSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // VTINV_GLOBAL_H
