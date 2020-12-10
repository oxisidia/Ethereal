
#ifndef animallib_EXPORT_H
#define animallib_EXPORT_H

#ifdef animallib_BUILT_AS_STATIC
#  define animallib_EXPORT
#  define ANIMALLIB_NO_EXPORT
#else
#  ifndef animallib_EXPORT
#    ifdef animallib_EXPORTS
        /* We are building this library */
#      define animallib_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define animallib_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef ANIMALLIB_NO_EXPORT
#    define ANIMALLIB_NO_EXPORT 
#  endif
#endif

#ifndef ANIMALLIB_DEPRECATED
#  define ANIMALLIB_DEPRECATED __declspec(deprecated)
#endif

#ifndef ANIMALLIB_DEPRECATED_EXPORT
#  define ANIMALLIB_DEPRECATED_EXPORT animallib_EXPORT ANIMALLIB_DEPRECATED
#endif

#ifndef ANIMALLIB_DEPRECATED_NO_EXPORT
#  define ANIMALLIB_DEPRECATED_NO_EXPORT ANIMALLIB_NO_EXPORT ANIMALLIB_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ANIMALLIB_NO_DEPRECATED
#    define ANIMALLIB_NO_DEPRECATED
#  endif
#endif

#endif /* animallib_EXPORT_H */
