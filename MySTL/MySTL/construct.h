#ifndef CONSTRUCT_H
#define CONSTRUCT_H
#include<new>   //
namespace mystl {
    template<typename T>
    void construct(T* ptr)
    {
        ::operator new((void*)ptr) T();
    }
    template<typename T1,typename T2>
    void construct(T1 ptr, const T2& value)
    {
        ::operator new((void*)ptr) T1(value);
    }

    template<typename T>
    void destroy(T* ptr)
    {
        ptr->~T();
    }

    template<typename T>
    void destory(T* first, T* last)
    {
        for (; first != last; first++)
        {
            destory(first);
        }
    }
}

#endif