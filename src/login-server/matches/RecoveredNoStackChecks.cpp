class Recovered00406000
{
    char padding[8];
    unsigned int value;
public:
    void Set(unsigned int input);
};

void Recovered00406000::Set(unsigned int input)
{
    value = input;
}

class Recovered0040AE00
{
    unsigned int begin;
    unsigned int unused;
    unsigned int end;
public:
    unsigned int Size();
};

unsigned int Recovered0040AE00::Size()
{
    return end - begin;
}

class Recovered0040AE20
{
    unsigned int unused;
    unsigned int begin;
    unsigned int unused2;
    unsigned int end;
public:
    unsigned int Size();
};

unsigned int Recovered0040AE20::Size()
{
    return end - begin;
}
