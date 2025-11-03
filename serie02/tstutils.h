#ifndef __TSTUTILS_H__ 
#define __TSTUTILS_H__

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static bool __result;
 

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
static void __show_byte_array(unsigned char a[], int size) {
    printf("[");
    if (size > 0) {
        printf("%d", a[0]);
        for(int i=1; i < size; ++i) {
            printf(",%u", a[i]);
        }
    }
    printf("]");
}


static void __show_string_array(char *a, int elem_size, int size) {
     printf("[");
    if (size > 0) {
        printf("'%s'", a);
        a += elem_size;
        for(int i=1; i < size; ++i) {
            printf(",'%s'", a);
            a += elem_size;
        }
    }
    printf("]");
}


#pragma GCC diagnostic pop

#define FAIL "\033[1;31mFAIL!(%d)\033[0m"
#define OK "\033[1;32mOK!\033[0m\n"

#define ERROR_ASSERTION(e) \
    printf("%-30s: ", __func__); \
    printf(FAIL, __LINE__); \
    printf(": assertion '%s' failed!\n", e); \
    __result = false

#define ERROR(msg, p1, p2) \
    printf("%-30s: ", __func__); \
    printf(FAIL, __LINE__); \
    printf(msg, p1, p2); \
    __result = false

#define ERROR0() \
    printf("%-30s: ", __func__); \
    printf(FAIL, __LINE__); \
    __result = false;
    
#define ERROR_INT(i1, i2) \
    ERROR(": expected %d, actual %d\n", (i1), (i2))

#define ERROR_STR(s1, s2) \
    ERROR(": expected '%s', actual '%s'\n", s1, s2)

#define ERROR_BYTE_ARRAY(a1, sz1, a2, sz2) \
    do { \
        ERROR0() \
        printf(": expected "); \
        __show_byte_array(a1, sz1); \
        printf(": actual "); \
        __show_byte_array(a2, sz2); \
        printf("\n"); \
    } \
    while(0)


#define ERROR_STRING_ARRAY(esz, a1, sz1, a2, sz2) \
    do { \
        ERROR0() \
        printf(": expected "); \
        __show_string_array(a1, esz, sz1); \
        printf(": actual "); \
        __show_string_array(a2, esz, sz2); \
        printf("\n"); \
    } \
    while(0)
    
#define ASSERT_EQUAL_INT(i1, i2) \
    do  { \
        int _i1 = (i1), _i2 = (i2); \
        if (_i1 != _i2) { \
            ERROR_INT(_i1, _i2); \
            return; \
        } \
    } \
    while(0)

#define ASSERT_EQUAL_STR(s1, s2) \
    do  { \
        char *_s1=(s1), *_s2=(s2); \
        if (strcmp(_s1, _s2) != 0) { \
            ERROR_STR(_s1, _s2); \
            return; \
        } \
    } \
    while(0)

// byte *_s1=(s1), *_s2=(s2); 
 
#define ASSERT_EQUAL_BYTE_ARRAY(s1, sz1, s2,sz2) \
    do  { \
        if (sz1 != sz2 || memcmp(s1, s2, sz1) != 0) { \
            ERROR_BYTE_ARRAY(s1, sz1, s2, sz2); \
            return; \
        } \
    } \
    while(0)

// char **_s1= ) (s1), **_s2= (char **) (s2); 
#define ASSERT_EQUAL_STRING_ARRAY(esz, s1, sz1, s2,sz2) \
    do  { \
        if (sz1 != sz2) { \
            ERROR_STRING_ARRAY(esz, s1, sz1, s2, sz2); \
            return; \
        } \
        for (int i= 0; i < sz1; i++) { \
            if (strcmp(s1[i], s2[i]) != 0)   { \
                ERROR_STRING_ARRAY(esz, s1, sz1, s2, sz2); \
                return; \
            } \
        } \
    } \
    while(0)

#define ASSERT_TRUE(e) \
    do { \
        if (!(e)) { \
            ERROR_ASSERTION(#e); \
            return; \
        } \
    }\
    while(0)


#define ASSERT_FALSE(e)  ASSERT_TRUE(!(e))

        
#define TEST(f)  \
    do { \
        __result = true; \
        f(); \
        if (__result) printf("%-30s: %s", #f, OK); \
    } while(0)

    
#endif
