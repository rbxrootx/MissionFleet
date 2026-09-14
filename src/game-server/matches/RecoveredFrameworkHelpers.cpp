class Recovered0049A910
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered0049A910::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_0049a910
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_0049a910:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered0049AA10
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered0049AA10::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_0049aa10
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_0049aa10:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered0049AB50
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered0049AB50::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_0049ab50
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_0049ab50:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered0049AC80
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered0049AC80::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_0049ac80
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_0049ac80:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered004A1540
{
    int data[3];
public:
    Recovered004A1540 *CopyFrom(const Recovered004A1540 &input);
};

__declspec(naked) Recovered004A1540 *Recovered004A1540::CopyFrom(const Recovered004A1540 &)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov edx, dword ptr [ebp-4]
        mov eax, dword ptr [ebp+8]
        mov ecx, dword ptr [eax+8]
        mov dword ptr [edx+8], ecx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}

class Recovered00535661
{
    int data[3];
public:
    Recovered00535661 *Init(int x, int y);
};

__declspec(naked) Recovered00535661 *Recovered00535661::Init(int, int)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp+12]
        mov dword ptr [eax+4], edx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
    }
}

class Recovered0053567F
{
    int data[3];
public:
    Recovered0053567F *Init(int x, int y);
};

__declspec(naked) Recovered0053567F *Recovered0053567F::Init(int, int)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp+12]
        mov dword ptr [eax+4], edx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
    }
}

class Recovered0053598A
{
    int data[3];
public:
    Recovered0053598A *Init(int x, int y);
};

__declspec(naked) Recovered0053598A *Recovered0053598A::Init(int, int)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp+12]
        mov dword ptr [eax+4], edx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
    }
}

class Recovered005359A8
{
    int data[3];
public:
    Recovered005359A8 *Init(int x, int y);
};

__declspec(naked) Recovered005359A8 *Recovered005359A8::Init(int, int)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp+12]
        mov dword ptr [eax+4], edx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
    }
}

class Recovered0054C9E0
{
    int data[3];
public:
    Recovered0054C9E0 *CopyFrom(const Recovered0054C9E0 &input);
};

__declspec(naked) Recovered0054C9E0 *Recovered0054C9E0::CopyFrom(const Recovered0054C9E0 &)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov edx, dword ptr [ebp-4]
        mov eax, dword ptr [ebp+8]
        mov ecx, dword ptr [eax+8]
        mov dword ptr [edx+8], ecx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}

class Recovered0054CB03
{
    int data[3];
public:
    Recovered0054CB03 *CopyFrom(const Recovered0054CB03 &input);
};

__declspec(naked) Recovered0054CB03 *Recovered0054CB03::CopyFrom(const Recovered0054CB03 &)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov edx, dword ptr [ebp-4]
        mov eax, dword ptr [ebp+8]
        mov ecx, dword ptr [eax+8]
        mov dword ptr [edx+8], ecx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}

class Recovered0054CCDF
{
    int data[3];
public:
    Recovered0054CCDF *CopyFrom(const Recovered0054CCDF &input);
};

__declspec(naked) Recovered0054CCDF *Recovered0054CCDF::CopyFrom(const Recovered0054CCDF &)
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [ebp+8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov edx, dword ptr [ebp-4]
        mov eax, dword ptr [ebp+8]
        mov ecx, dword ptr [eax+8]
        mov dword ptr [edx+8], ecx
        mov eax, dword ptr [ebp-4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
