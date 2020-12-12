
#ifndef PROJECT_NAME_EXPORT_H
#define PROJECT_NAME_EXPORT_H

#ifdef PROJECT_NAME_BUILT_AS_STATIC
#  define PROJECT_NAME_EXPORT
#  define ETHEREAL_NO_EXPORT
#else
#  ifndef PROJECT_NAME_EXPORT
#    ifdef Ethereal_EXPORTS
        /* We are building this library */
#      define PROJECT_NAME_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define PROJECT_NAME_EXPORT __declspec(dllimport)
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
#  define ETHEREAL_DEPRECATED_EXPORT PROJECT_NAME_EXPORT ETHEREAL_DEPRECATED
#endif

#ifndef ETHEREAL_DEPRECATED_NO_EXPORT
#  define ETHEREAL_DEPRECATED_NO_EXPORT ETHEREAL_NO_EXPORT ETHEREAL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ETHEREAL_NO_DEPRECATED
#    define ETHEREAL_NO_DEPRECATED
#  endif
#endif

#endif /* PROJECT_NAME_EXPORT_H */
