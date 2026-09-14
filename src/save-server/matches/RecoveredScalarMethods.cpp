int Recovered00449FE9(void *input)
{
    return ((unsigned short *)input)[1] == 0xffff;
}

class Recovered004543CC
{
    unsigned int value;
public:
    void Set(unsigned int input);
};

void Recovered004543CC::Set(unsigned int input)
{
    value = input;
}

class Recovered004A5C52
{
public:
    int Get(int, int, int);
};

int Recovered004A5C52::Get(int, int, int)
{
    return 0;
}

class Recovered004A5C61
{
public:
    int Get(int, int, int);
};

int Recovered004A5C61::Get(int, int, int)
{
    return 0;
}

class Recovered004C6D80
{
public:
    unsigned int Get(unsigned int input);
};

unsigned int Recovered004C6D80::Get(unsigned int input)
{
    return (input & 0xffff) >> 4;
}

class Recovered004C8920
{
public:
    unsigned int Get(unsigned int input);
};

unsigned int Recovered004C8920::Get(unsigned int input)
{
    return (input & 0xffff) >> 4;
}

class Recovered004D2F79
{
public:
    int Get(int);
};

int Recovered004D2F79::Get(int)
{
    return 0;
}

class Recovered004D7643
{
public:
    int Get(int);
};

int Recovered004D7643::Get(int)
{
    return 1;
}

class Recovered004D7655
{
public:
    int Get(int);
};

int Recovered004D7655::Get(int)
{
    return 0;
}

class Recovered004D77B1
{
public:
    int Get(int);
};

int Recovered004D77B1::Get(int)
{
    return 0;
}

class Recovered004D77D0
{
public:
    int Get(int);
};

int Recovered004D77D0::Get(int)
{
    return 0;
}

class Recovered004D77DF
{
public:
    int Get(int);
};

int Recovered004D77DF::Get(int)
{
    return 0;
}

int Recovered004DBA90(void *input)
{
    return ((unsigned short *)input)[1] == 0xffff;
}

class Recovered004ED4EE
{
public:
    void Run(int, int);
};

void Recovered004ED4EE::Run(int, int)
{
}

class Recovered004ED5E9
{
public:
    int Get(int, int, int);
};

int Recovered004ED5E9::Get(int, int, int)
{
    return 0;
}

class Recovered004ED5F8
{
public:
    int Get(int, int, int);
};

int Recovered004ED5F8::Get(int, int, int)
{
    return 0;
}

class Recovered004ED619
{
public:
    int Get(int, int, int, int);
};

int Recovered004ED619::Get(int, int, int, int)
{
    return 0;
}

class Recovered004ED628
{
public:
    int Get(int, int, int, int);
};

int Recovered004ED628::Get(int, int, int, int)
{
    return 0;
}

class Recovered004ED637
{
public:
    int Get(int, int, int, int);
};

int Recovered004ED637::Get(int, int, int, int)
{
    return 0;
}

class Recovered004ED9C0
{
public:
    int Get(int);
};

int Recovered004ED9C0::Get(int)
{
    return 1;
}

class Recovered0050A0F9
{
public:
    void Run(int, int);
};

void Recovered0050A0F9::Run(int, int)
{
}

class Recovered00525382
{
    int value;
public:
    Recovered00525382 &Apply(int input);
};

Recovered00525382 &Recovered00525382::Apply(int input)
{
    value += input;
    return *this;
}

class Recovered0052539F
{
    int value;
public:
    Recovered0052539F &Apply(int input);
};

Recovered0052539F &Recovered0052539F::Apply(int input)
{
    value -= input;
    return *this;
}

class Recovered005253BC
{
    int value;
public:
    int Compare(int input);
};

int Recovered005253BC::Compare(int input)
{
    return value == input;
}

class Recovered005253D6
{
    int value;
public:
    int Compare(int input);
};

int Recovered005253D6::Compare(int input)
{
    return value != input;
}

class Recovered005253F0
{
    int value;
public:
    int Compare(int input);
};

int Recovered005253F0::Compare(int input)
{
    return value < input;
}

class Recovered0052540A
{
    int value;
public:
    int Compare(int input);
};

int Recovered0052540A::Compare(int input)
{
    return value > input;
}

class Recovered00525424
{
    int value;
public:
    int Compare(int input);
};

int Recovered00525424::Compare(int input)
{
    return value <= input;
}

class Recovered0052543E
{
    int value;
public:
    int Compare(int input);
};

int Recovered0052543E::Compare(int input)
{
    return value >= input;
}

class Recovered005255EF
{
    int value;
public:
    Recovered005255EF &Apply(int input);
};

Recovered005255EF &Recovered005255EF::Apply(int input)
{
    value += input;
    return *this;
}

class Recovered0052560C
{
    int value;
public:
    Recovered0052560C &Apply(int input);
};

Recovered0052560C &Recovered0052560C::Apply(int input)
{
    value -= input;
    return *this;
}

class Recovered00525629
{
    int value;
public:
    int Compare(int input);
};

int Recovered00525629::Compare(int input)
{
    return value == input;
}

class Recovered00525643
{
    int value;
public:
    int Compare(int input);
};

int Recovered00525643::Compare(int input)
{
    return value != input;
}

class Recovered0052565D
{
    int value;
public:
    int Compare(int input);
};

int Recovered0052565D::Compare(int input)
{
    return value < input;
}

class Recovered00525677
{
    int value;
public:
    int Compare(int input);
};

int Recovered00525677::Compare(int input)
{
    return value > input;
}

class Recovered00525691
{
    int value;
public:
    int Compare(int input);
};

int Recovered00525691::Compare(int input)
{
    return value <= input;
}

class Recovered005256AB
{
    int value;
public:
    int Compare(int input);
};

int Recovered005256AB::Compare(int input)
{
    return value >= input;
}

class Recovered00525D28
{
    unsigned int value;
public:
    void Set(unsigned int input);
};

void Recovered00525D28::Set(unsigned int input)
{
    value = input;
}

class Recovered00525D6B
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered00525D6B::Get()
{
    return value - 1;
}

class Recovered00525EFB
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered00525EFB::Get()
{
    return value - 1;
}

class Recovered00526092
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered00526092::Get()
{
    return value - 1;
}

class Recovered00526225
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered00526225::Get()
{
    return value - 1;
}

class Recovered005263BB
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered005263BB::Get()
{
    return value - 1;
}

class Recovered00526557
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered00526557::Get()
{
    return value - 1;
}

class Recovered005266F3
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered005266F3::Get()
{
    return value - 1;
}

class Recovered0052B540
{
    char padding[28];
    void *handle;
public:
    void *Get();
};

void *Recovered0052B540::Get()
{
    return this == 0 ? 0 : handle;
}

class Recovered0052B5AC
{
    char padding[28];
    void *handle;
public:
    void *Get();
};

void *Recovered0052B5AC::Get()
{
    return this == 0 ? 0 : handle;
}

class Recovered00541328
{
public:
    void Run(int, int);
};

void Recovered00541328::Run(int, int)
{
}

class Recovered0056796D
{
public:
    int Get(int, int);
};

int Recovered0056796D::Get(int, int)
{
    return 0;
}

class Recovered00568A96
{
public:
    int Get(int, int);
};

int Recovered00568A96::Get(int, int)
{
    return 0;
}

class Recovered00568AA5
{
public:
    int Get(int, int);
};

int Recovered00568AA5::Get(int, int)
{
    return 0;
}

class Recovered00568D40
{
public:
    int Get(int, int, int);
};

int Recovered00568D40::Get(int, int, int)
{
    return 0;
}

int __stdcall Recovered005692F3(int, int, int)
{
    return 0x00040130;
}

class Recovered00572324
{
public:
    int Get(int);
};

int Recovered00572324::Get(int)
{
    return 0;
}

int __stdcall Recovered00577949(int, int, int)
{
    return 0x00040130;
}

int __stdcall Recovered0057B4DA(int, int, int)
{
    return 0x00040130;
}
