int get_size(){static int i = 0; return i++;};

int main(){
    int sz;
    while(sz = get_size() <= 0);
    return 0;
}