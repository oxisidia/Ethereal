
#ifndef Ethereal_EXPORT_H
#define Ethereal_EXPORT_H

#ifdef Ethereal_BUILT_AS_STATIC
#  define Ethereal_EXPORT
#  define ETHEREAL_NO_EXPORT
#else
#  ifndef Ethereal_EXPORT
#    ifdef Ethereal_EXPORTS
        /* We are building this library */
#      define Ethereal_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define Ethereal_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef ETHEREAL_NO_EXPORT
#    define ETHEREAL_NO_EXPORT 
#  endif
#endif

#ifndef ETHEREAL_DEPRECATED
#  define ETHEREAL_DEPRECATED __declspec(deprecated)
#endif

#ifndef ETHEREAL_DEPRECATED_EXPORT
#  define ETHEREAL_DEPRECATED_EXPORT Ethereal_EXPORT ETHEREAL_DEPRECATED
#endif

#ifndef ETHEREAL_DEPRECATED_NO_EXPORT
#  define ETHEREAL_DEPRECATED_NO_EXPORT ETHEREAL_NO_EXPORT ETHEREAL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ETHEREAL_NO_DEPRECATED
#    define ETHEREAL_NO_DEPRECATED
#  endif
#endif

#endif /* Ethereal_EXPORT_H */
