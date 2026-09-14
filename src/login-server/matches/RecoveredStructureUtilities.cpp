class Recovered004043A0
{
    unsigned int value;
public:
    Recovered004043A0(const Recovered004043A0 &input);
};

Recovered004043A0::Recovered004043A0(const Recovered004043A0 &input)
{
    value = input.value;
}

class Recovered0040AE40
{
    int unused;
    void *handle;
public:
    void *Get();
};

void *Recovered0040AE40::Get()
{
    return this == 0 ? 0 : handle;
}

class Recovered0040D590
{
    unsigned int value;
public:
    Recovered0040D590(const Recovered0040D590 &input);
};

Recovered0040D590::Recovered0040D590(const Recovered0040D590 &input)
{
    value = input.value;
}
