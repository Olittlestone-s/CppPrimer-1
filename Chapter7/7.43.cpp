class NoDefault{
public:
    NoDefault(int memeber): member(memeber){}
private:
    int member;
};

class C{
public:
    C():noDefault(1){}
private:
    NoDefault noDefault;
};

int main(){}