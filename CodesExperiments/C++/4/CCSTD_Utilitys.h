#ifndef _CCSTDC_UTILITYS_
#define _CCSTDC_UTILITYS_

#include <memory.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef true
#define True 1
#else
#define True true
#endif
 
#ifndef false
#define False 0
#else
#define False false
#endif

#ifndef bool
typedef short CCSTD_Bool;
#else
typedef bool CCSTD_Bool;
#endif

#define ISSELF_NULL(obj) ((obj) == NULL)

#define SAFE_MALLOC(PTR, type) \
    type* __MALLOC__PTR__ = (type*)malloc(sizeof(type));\
    if(!__MALLOC__PTR__) \
        exit(-1);\
    PTR = __MALLOC__PTR__

#define SAFE_NMALLOC(PTR, SIZE) \
    void* __MALLOC__PTR__ = malloc(SIZE*sizeof(char));\
    if(!__MALLOC__PTR__) \
        exit(-1);\
    PTR = __MALLOC__PTR__

#define SAFE_FREE(PTR) \
    if(!PTR)\
        free(PTR); \
    PTR = NULL


#define CCSTDC_ASSERT(COND, NEED_SPIN, MSG) \
do{\
    if(!(COND))\
    {\
        printf("%s\n", MSG);\
        if(NEED_SPIN)\
        {\
            while(1);\
        }\
    }\
}while(0)

#define CCSTDC_STATE(MSG) \
    printf("State: %s\n", MSG)

#define CCSTDC_WARNING(MSG) \
    printf("Warning: %s\n", MSG)




#endif