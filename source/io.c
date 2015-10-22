/*
    @Author: gatsby
    @Data: 2015-10-22
    @Mail: i-careforu@foxmail.com
    @Comment: 网络IO同本地IO的实现。
*/

#include <base.h>

/* 设置线程默认向内存存取数据的大小@内核缓冲区默认大小8KB */
/* @Note: 采用线程局部存储(TLS)，所有api均是线程安全的(thread-safe)。 */
int setdef(size_t size)
{
    return 0;
}

/* 高效内存拷贝函数的实现 */
/* @Note: 频繁的数据拷贝是服务器的性能瓶颈之一，本文件提供了基于汇编的高效实现方式 */
extern inline void *_memcpy(const void *src, void *dst, size_t size)
{
   #ifdef _X86_
   __asm__ __volatile__(
        /* 汇编语言 */
   );
   #endif 
   return NULL;
}

/* 读socket@一直读直至内核缓冲区没数据为止 */
/* ＠Note: 用户态陷入系统态涉及大量数据拷贝，是性能瓶颈之一，所以要减少系统调用 */
int rdsock(int sock, char *buffer)
{
    return 0;
}

/* 写socket@一直写直至无数据 */
/* @Note: 同rdsock函数一致 */
int wrsock(int sock, char *buffer, int bytes)
{
    return 0;
}
