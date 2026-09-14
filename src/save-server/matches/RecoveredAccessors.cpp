class Recovered004297F0
{
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered004297F0::Get()
{
    return value;
}

class Recovered0042C1F0
{
    char padding[4];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered0042C1F0::Get()
{
    return value;
}

class Recovered0042E130
{
    char padding[24];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered0042E130::Get()
{
    return value;
}

class Recovered0042DC0D { public: int Get(); };
int Recovered0042DC0D::Get() { return 1; }

class Recovered0042B9FE { public: int Get(int); };
int Recovered0042B9FE::Get(int) { return 1; }

class Recovered00429631 { public: int Get(int, int, int); };
int Recovered00429631::Get(int, int, int) { return 1; }

class Recovered0042D51C { public: int Get(int); };
int Recovered0042D51C::Get(int) { return 0; }

class Recovered0042D80F { public: int Get(int); };
int Recovered0042D80F::Get(int) { return 0; }
