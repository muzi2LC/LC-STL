#ifndef MYSTL_ALGOBASE_H
#define MYSTL_ALGOBASE_H
namespace mystl{
    template<typename T>
    const T &max(const T&lhs,const T& rhs)
    {
        //test if there is operator <
        return lhs<rhs?rhs:lhs;
    }
    template<typename T,typename Compare>
    const T& max(const T&lhs,const T& rhs,Compare comp)
    {
        return comp(lhs,rhs)?rhs:lhs;
    }
    
    template<typename T>
    const T &min(const T&lhs,const T& rhs)
    {
        //test if type T has operator <
        return lhs<rhs?lhs:rhs;
    }
    template<typename T,typename Compare>
    const T& min(const T&lhs,const T& rhs,Compare comp)
    {
        //test if Compare has function ()
        return comp(lhs,rhs)?lhs:rhs;
    }

    template<typename T>
    inline void swap(T& a,T &b)
    {
        T tmp=a;
        a=b;
        b=tmp;
    }

    template<typename T1,typename T2>
    void iter_swap(T1 lhs,T2 rhs)
    {
        mystl::swap(*lhs,*rhs);
    }


}
#endif