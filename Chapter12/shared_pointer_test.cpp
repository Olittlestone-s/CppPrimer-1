#include <iostream>

#ifndef __SHARED_POINTER_H__
#define __SHARED_POINTER_H__ 1
#include <stdexcept>
template <typename T>
class SharePtr
{
public:
    SharePtr() = default;
    explicit SharePtr(T *ptr) : obj_ptr(ptr), ref_cnt(new int(1))
    {
    }

    SharePtr(const SharePtr &another)
    {
        obj_ptr = another.obj_ptr;
        ref_cnt = another.ref_cnt;
        incRefCnt();
    }

    SharePtr &operator=(const SharePtr &another)
    {
        if (&another != this)
        {
            decRefCnt();
            obj_ptr = another.obj_ptr;
            ref_cnt = another.ref_cnt;
            incRefCnt();
        }
        return *this;
    }

    T &operator*()
    {
        return *obj_ptr;
    }

    T *operator->()
    {
        return obj_ptr;
    }

    ~SharePtr()
    {
        decRefCnt();
    }

private:
    void incRefCnt()
    {
        ++(*ref_cnt);
    }

    void decRefCnt()
    {
        if (--(*ref_cnt) == 0)
        {
            do_delete();
        }
    }

    void do_delete()
    {
        delete obj_ptr;
        delete ref_cnt;
    }

private:
    T *obj_ptr;
    int *ref_cnt;
};
#endif

using namespace std;

int main()
{
    SharePtr<int> sp(new int(10));
    return 0;
}