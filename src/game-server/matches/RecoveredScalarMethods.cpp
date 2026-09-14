int Recovered0048D9F9(void *input)
{
    return ((unsigned short *)input)[1] == 0xffff;
}

class Recovered00497DA7
{
    unsigned int value;
public:
    void Set(unsigned int input);
};

void Recovered00497DA7::Set(unsigned int input)
{
    value = input;
}

class Recovered004D2B42
{
public:
    int Get(int, int, int);
};

int Recovered004D2B42::Get(int, int, int)
{
    return 0;
}

class Recovered004D2B51
{
public:
    int Get(int, int, int);
};

int Recovered004D2B51::Get(int, int, int)
{
    return 0;
}

class Recovered004E92E0
{
public:
    unsigned int Get(unsigned int input);
};

unsigned int Recovered004E92E0::Get(unsigned int input)
{
    return (input & 0xffff) >> 4;
}

class Recovered004EA840
{
public:
    unsigned int Get(unsigned int input);
};

unsigned int Recovered004EA840::Get(unsigned int input)
{
    return (input & 0xffff) >> 4;
}

class Recovered004F5049
{
public:
    int Get(int);
};

int Recovered004F5049::Get(int)
{
    return 0;
}

class Recovered004F85A3
{
public:
    int Get(int);
};

int Recovered004F85A3::Get(int)
{
    return 1;
}

class Recovered004F85B5
{
public:
    int Get(int);
};

int Recovered004F85B5::Get(int)
{
    return 0;
}

class Recovered004F8711
{
public:
    int Get(int);
};

int Recovered004F8711::Get(int)
{
    return 0;
}

class Recovered004F8730
{
public:
    int Get(int);
};

int Recovered004F8730::Get(int)
{
    return 0;
}

class Recovered004F873F
{
public:
    int Get(int);
};

int Recovered004F873F::Get(int)
{
    return 0;
}

int Recovered004FCCD0(void *input)
{
    return ((unsigned short *)input)[1] == 0xffff;
}

class Recovered0050850F
{
public:
    void Run(int, int);
};

void Recovered0050850F::Run(int, int)
{
}

class Recovered0050860A
{
public:
    int Get(int, int, int);
};

int Recovered0050860A::Get(int, int, int)
{
    return 0;
}

class Recovered00508619
{
public:
    int Get(int, int, int);
};

int Recovered00508619::Get(int, int, int)
{
    return 0;
}

class Recovered0050863A
{
public:
    int Get(int, int, int, int);
};

int Recovered0050863A::Get(int, int, int, int)
{
    return 0;
}

class Recovered00508649
{
public:
    int Get(int, int, int, int);
};

int Recovered00508649::Get(int, int, int, int)
{
    return 0;
}

class Recovered00508658
{
public:
    int Get(int, int, int, int);
};

int Recovered00508658::Get(int, int, int, int)
{
    return 0;
}

class Recovered005089E1
{
public:
    int Get(int);
};

int Recovered005089E1::Get(int)
{
    return 1;
}

class Recovered00520F78
{
public:
    void Run(int, int);
};

void Recovered00520F78::Run(int, int)
{
}

class Recovered00531598
{
    int value;
public:
    Recovered00531598 &Apply(int input);
};

Recovered00531598 &Recovered00531598::Apply(int input)
{
    value += input;
    return *this;
}

class Recovered005315B5
{
    int value;
public:
    Recovered005315B5 &Apply(int input);
};

Recovered005315B5 &Recovered005315B5::Apply(int input)
{
    value -= input;
    return *this;
}

class Recovered005315D2
{
    int value;
public:
    int Compare(int input);
};

int Recovered005315D2::Compare(int input)
{
    return value == input;
}

class Recovered005315EC
{
    int value;
public:
    int Compare(int input);
};

int Recovered005315EC::Compare(int input)
{
    return value != input;
}

class Recovered00531606
{
    int value;
public:
    int Compare(int input);
};

int Recovered00531606::Compare(int input)
{
    return value < input;
}

class Recovered00531620
{
    int value;
public:
    int Compare(int input);
};

int Recovered00531620::Compare(int input)
{
    return value > input;
}

class Recovered0053163A
{
    int value;
public:
    int Compare(int input);
};

int Recovered0053163A::Compare(int input)
{
    return value <= input;
}

class Recovered00531654
{
    int value;
public:
    int Compare(int input);
};

int Recovered00531654::Compare(int input)
{
    return value >= input;
}

class Recovered00531826
{
    int value;
public:
    Recovered00531826 &Apply(int input);
};

Recovered00531826 &Recovered00531826::Apply(int input)
{
    value += input;
    return *this;
}

class Recovered00531843
{
    int value;
public:
    Recovered00531843 &Apply(int input);
};

Recovered00531843 &Recovered00531843::Apply(int input)
{
    value -= input;
    return *this;
}

class Recovered00531860
{
    int value;
public:
    int Compare(int input);
};

int Recovered00531860::Compare(int input)
{
    return value == input;
}

class Recovered0053187A
{
    int value;
public:
    int Compare(int input);
};

int Recovered0053187A::Compare(int input)
{
    return value != input;
}

class Recovered00531894
{
    int value;
public:
    int Compare(int input);
};

int Recovered00531894::Compare(int input)
{
    return value < input;
}

class Recovered005318AE
{
    int value;
public:
    int Compare(int input);
};

int Recovered005318AE::Compare(int input)
{
    return value > input;
}

class Recovered005318C8
{
    int value;
public:
    int Compare(int input);
};

int Recovered005318C8::Compare(int input)
{
    return value <= input;
}

class Recovered005318E2
{
    int value;
public:
    int Compare(int input);
};

int Recovered005318E2::Compare(int input)
{
    return value >= input;
}

class Recovered00531F5F
{
    unsigned int value;
public:
    void Set(unsigned int input);
};

void Recovered00531F5F::Set(unsigned int input)
{
    value = input;
}

class Recovered00531FA2
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered00531FA2::Get()
{
    return value - 1;
}

class Recovered00532132
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered00532132::Get()
{
    return value - 1;
}

class Recovered005322C9
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered005322C9::Get()
{
    return value - 1;
}

class Recovered0053245C
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered0053245C::Get()
{
    return value - 1;
}

class Recovered005325F2
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered005325F2::Get()
{
    return value - 1;
}

class Recovered0053278E
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered0053278E::Get()
{
    return value - 1;
}

class Recovered0053292A
{
    char padding[8];
    unsigned int value;
public:
    unsigned int Get();
};

unsigned int Recovered0053292A::Get()
{
    return value - 1;
}

class Recovered0053BAE0
{
    char padding[28];
    void *handle;
public:
    void *Get();
};

void *Recovered0053BAE0::Get()
{
    return this == 0 ? 0 : handle;
}

class Recovered0053BB4C
{
    char padding[28];
    void *handle;
public:
    void *Get();
};

void *Recovered0053BB4C::Get()
{
    return this == 0 ? 0 : handle;
}

class Recovered005461A8
{
public:
    void Run(int, int);
};

void Recovered005461A8::Run(int, int)
{
}

class Recovered00561A6D
{
public:
    int Get(int, int);
};

int Recovered00561A6D::Get(int, int)
{
    return 0;
}

class Recovered00562B96
{
public:
    int Get(int, int);
};

int Recovered00562B96::Get(int, int)
{
    return 0;
}

class Recovered00562BA5
{
public:
    int Get(int, int);
};

int Recovered00562BA5::Get(int, int)
{
    return 0;
}

class Recovered00562E40
{
public:
    int Get(int, int, int);
};

int Recovered00562E40::Get(int, int, int)
{
    return 0;
}

int __stdcall Recovered005633F3(int, int, int)
{
    return 0x00040130;
}

class Recovered00569974
{
public:
    int Get(int);
};

int Recovered00569974::Get(int)
{
    return 0;
}

int __stdcall Recovered0056EF99(int, int, int)
{
    return 0x00040130;
}

int __stdcall Recovered00572B2A(int, int, int)
{
    return 0x00040130;
}
