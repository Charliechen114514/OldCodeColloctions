#include "CCSTD_MemoryList.h"
#include "CCSTD_Utilitys.h"
CCSTD_Bool isHaveNext(MemoryBufferNode* node)
{
    return ISSELF_NULL(node) && ISSELF_NULL(node->bufnext);
}
CCSTD_Bool isHavePrev(MemoryBufferNode* node)
{
    return ISSELF_NULL(node) && ISSELF_NULL(node->bufprev);
}
CCSTD_Bool isHaveInitedBuf(MemoryBufferNode* node)
{
    return ISSELF_NULL(node) && ISSELF_NULL(node->buffer);
}

void setBuf(MemoryBufferNode* node, int bufSize)
{
    CCSTDC_ASSERT(!isHaveInitedBuf(node), 1, "AlreadyInitedBuf!");
    
    void* buf = NULL;
    SAFE_NMALLOC(buf, bufSize);
    node->buffer = buf;
    node->bufSize = bufSize;
}

void freeBuf(MemoryBufferNode* node)
{
    SAFE_FREE(node->buffer);
    SAFE_FREE(node);
}

void setNext(MemoryBufferNode* m_node, MemoryBufferNode* node)
{
    CCSTDC_ASSERT(!m_node->bufnext, 1, "expected null next, but already inited!");
    
    m_node->bufnext = node;
}

void setPrev(MemoryBufferNode* m_node, MemoryBufferNode* node)
{
    CCSTDC_ASSERT(!m_node->bufprev, 1, "expected null next, but already inited!");
    
    m_node->bufprev = node;
}

MemoryBufferNode* initNode()
{
    MemoryBufferNode* buf = NULL;
    SAFE_MALLOC(buf, MemoryBufferNode);
    buf->buffer = NULL;
    buf->bufnext = NULL;
    buf->bufprev = NULL;
    buf->bufSize = 0;
    buf->setNext = setNext;
    buf->setPrev = setPrev;
    return buf;
}
