#include "CCSTD_Utilitys.h"

struct MemoryBufferNode;
typedef void(*MemoryNodeOperate)(struct MemoryBufferNode*, struct MemoryBufferNode*);

typedef struct MemoryBufferNode
{
    // members
    void*                       buffer;
    int                         bufSize; 
    struct MemoryBufferNode*    bufnext;
    struct MemoryBufferNode*    bufprev;
    MemoryNodeOperate           setNext;
    MemoryNodeOperate           setPrev;
}MemoryBufferNode;

// MemoryBufsNode releted
MemoryBufferNode* initNode();

// functional 

void setBuf(MemoryBufferNode* node, int bufSize);
void freeBuf(MemoryBufferNode* node);
void setNext(MemoryBufferNode* master_node, MemoryBufferNode* node);
void setPrev(MemoryBufferNode* master_node, MemoryBufferNode* node);

// utilities
CCSTD_Bool isHaveNext(MemoryBufferNode* node);
CCSTD_Bool isHavePrev(MemoryBufferNode* node);
CCSTD_Bool isHaveInitedBuf(MemoryBufferNode* node);

struct MemoryLists
{

    // members
    MemoryBufferNode* head;
    MemoryBufferNode* end;
};



