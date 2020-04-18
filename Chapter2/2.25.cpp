/*
(a) ip是一个指向int的指针（未初始化），r是一个int对象的引用，使用int指针不能对引用进行初始化，因此，此
声明语句是非法的
(b) i是一个int未初始化的int对象，ip是一个初始为0的int对象的指针，因此，ip不指向任何对象
(c) ip是一个未初始化的int对象的指针，ip2是一个未初始化的int对象
这种声明的风格不好，容易造成误解，以为ip2也是一个指针对象！ 
*/

int main(){
    // int* ip, &r = ip;
    int i, *ip = 0;
    int* ip, ip2;
    return 0;
}