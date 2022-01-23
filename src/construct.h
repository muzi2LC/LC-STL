#ifndef MYSTL_CONSTRUCT_H
#define MYSTL_CONSTRUCT_H
#include<new>                      //place new
#include"traits.h"
namespace mystl {
    template<typename T>
    inline void construct(T* ptr)
    {
        ::new((void*)ptr) T();
    }
    template<typename T1,typename T2>
    void construct(T1 ptr, const T2& value)
    {
        ::new((void*)ptr) T1(value);                      //
    }
    //destory
    template<typename T>
    void destroy_one(T*,__true_type ){}
    
    template<typename T>
    void destroy_one(T* ptr,__false_type)
    {
        if(ptr!=nullptr)
        {
            ptr->~T();
        }
    }
    template<typename T>
    void destroy(T* ptr)
    {
        destroy_one(ptr,__type_traits<T>::has_trivial_default_constructor())
    }

    template<typename Iter>
    void destroy_cat(Iter first,Iter last,__true_type){}

    template<typename Iter>
    void destroy_cat(Iter first,Iter last,__false_type)
    {
        for(;first!=last;++first)
        {
            destroy(&*first);                                        //first是迭代器，转化为指针
        }
    }

    template<typename Iter>
    void destroy(Iter first,Iter last)
    {
        destroy_cat(first,last,__type_traits<T>::has_trivial_default_constructor());
    }



}

#endif