// block 1
#ifdef __cplusplus
#define EXTERN_Begin extern "C" {
#define EXTERN_End  }
#else
#define EXTERN_Begin
#define EXTERN_End
#endif

EXTERN_Begin 
int add(int a, int b);
EXTERN_End