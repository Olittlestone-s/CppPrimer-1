#include <cstddef>
#include <vector>

int arrayCompare(const int *arr1, const size_t arr1_len,
                 const int* arr2, const size_t arr2_len){
    size_t index1 = 0;
    size_t index2 = 0;
    while(index1 < arr1_len && index2 < arr2_len){
        if(arr1[index1] < arr2[index2]){
            return -1;
        }else if(arr1[index1] > arr2[index2]){
            return 1;
        }else{
            ++index1;
            ++index2;
        }
    }
    if(index1 == arr1_len){
        return -1;
    }else if(index2 == arr2_len){
        return 1;
    }else{
        return 0;
    }
}

using std::vector;
int vectorCompare(const vector<int>& v1, const vector<int>& v2){
    return v1 == v2 ? 0 : (v1 < v2 ? -1 : 1);
}