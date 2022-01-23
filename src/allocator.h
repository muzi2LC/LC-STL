#ifndef MYSTL_ALLOCATOR_H
#define MYSTL_ALLOCATOR_H
#include<cstddef>           //size_t, ptrdiff_t
#include<new>               //new delete
#include"construct.h"
namespace mystl {
    template<class T>
    class allocator
    {
    public:
        typedef T                   value_type;
        typedef T*                  pointer;
        typedef const T*            const_pointer;
        typedef T&                  reference;
        typedef const T&            const_reference;
        typedef size_t              size_type;
        typedef ptrdiff_t           difference_type;
        
        static pointer allocate() 
        {
            return static_cast<pointer>(::operator new(sizeof(T));
        };
        static pointer allocate(size_type n)
        {
            if(n==0)
                return static_cast<pointer>(::operator new(1));
            return static_cast<pointer>(::operator new(n*sizeof(T));
        }

        static void deallocate(pointer ptr)
        {
            if (ptr == nullptr)
                return;
            ::operator delete(ptr);
        }
        static void deallocate(pointer ptr, size_type n)
        {
            if (ptr == nullptr)
                return;
            ::operator delete(ptr);
        }

        static void construct(pointer ptr)
        {
            mystl::construct(ptr);
        }
        static void construct(pointer ptr, const_reference value)
        {
            mystl::construct(ptr, value);
        }

        static void destory(pointer ptr)
        {
            mystl::destroy(ptr)
        }
        static void destory(pointer first, pointer last)
        {
            mystl::destroy(first,last);
        }
    };
    
}




#endif // !ALLOCATOR_H

