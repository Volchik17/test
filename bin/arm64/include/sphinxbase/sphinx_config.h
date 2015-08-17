/* include/sphinx_config.h.  Generated from sphinx_config.h.in by configure.  */
/* sphinx_config.h: Externally visible configuration parameters */

/* Use fixed-point computation */
/* #undef FIXED_POINT */

/* Default radix point for fixed-point */
/* #undef DEFAULT_RADIX */

/* The size of `long', as computed by sizeof. */
#ifdef __LP64__
 #define SIZEOF_LONG 8
#else
 #define SIZEOF_LONG 4
#endif

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* Enable debugging output */
/* #undef SPHINX_DEBUG */
