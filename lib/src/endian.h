
// Determine endian based on known defines.
// `TS_BIG_ENDIAN` can be set as -D compiler arguments to override this.

#if !defined(TS_BIG_ENDIAN)
#if (defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__) \
  || (defined( __APPLE_CC__) && (defined(__ppc__) || defined(__ppc64__)))
#define TS_BIG_ENDIAN 1
#else
#define TS_BIG_ENDIAN 0
#endif
#endif
