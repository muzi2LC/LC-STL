#ifndef MYSTL_TRAITS_H
#define MYSTL_TRAITS_H

namespace mystl {
    struct __true_type{};
    struct __false_type{};
    template<typename T> struct __type_traits{
        typedef __false_type has_trivial_default_constructor;
        typedef __false_type has_trivial_destructor;
    };
    template<> struct __type_traits<bool>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };

    template<> struct __type_traits<char>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<unsigned char>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<signed char>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<wchar_t>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };


    template<> struct __type_traits<short>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<unsigned short>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<int>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<unsigned int>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };

    template<> struct __type_traits<long>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<unsigned long>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };
    template<> struct __type_traits<long long>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };

    template<> struct __type_traits<unsigned long long>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;
    };

    template<> struct __type_traits<double>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;   
    };
    template<> struct __type_traits<long double>{
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;   
    };

    template<typename T> struct __type_traits<T*>
    {
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_destructor;   
    };
    
}




#endif // !TRAITS_H

