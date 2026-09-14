class Recovered00456F30
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered00456F30::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_00456f30
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_00456f30:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered00457030
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered00457030::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_00457030
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_00457030:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered00457170
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered00457170::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_00457170
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_00457170:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered004572A0
{
    int data[3];
public:
    void ReleaseStored();
};

__declspec(naked) void Recovered004572A0::ReleaseStored()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp-4], ecx
        mov eax, dword ptr [ebp-4]
        cmp dword ptr [eax], 0
        je skip_004572a0
        mov ecx, dword ptr [ebp-4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp-4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+8]
skip_004572a0:
        mov esp, ebp
        pop ebp
        ret
    }
}

class Recovered0045DB52
{
    int data[3];
public:
    Recovered0045DB52 *CopyFrom(const Recovered0045DB52 &input);
};

__declspec(naked) Recovered0045DB52 *Recovered0045DB52::CopyFrom(const Recovered0045DB52 &)
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

class Recovered00531BD1
{
    int data[3];
public:
    Recovered00531BD1 *Init(int x, int y);
};

__declspec(naked) Recovered00531BD1 *Recovered00531BD1::Init(int, int)
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

class Recovered00531BEF
{
    int data[3];
public:
    Recovered00531BEF *Init(int x, int y);
};

__declspec(naked) Recovered00531BEF *Recovered00531BEF::Init(int, int)
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

class Recovered00531E7D
{
    int data[3];
public:
    Recovered00531E7D *Init(int x, int y);
};

__declspec(naked) Recovered00531E7D *Recovered00531E7D::Init(int, int)
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

class Recovered00531E9B
{
    int data[3];
public:
    Recovered00531E9B *Init(int x, int y);
};

__declspec(naked) Recovered00531E9B *Recovered00531E9B::Init(int, int)
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

class Recovered0054B450
{
    int data[3];
public:
    Recovered0054B450 *CopyFrom(const Recovered0054B450 &input);
};

__declspec(naked) Recovered0054B450 *Recovered0054B450::CopyFrom(const Recovered0054B450 &)
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

class Recovered0054B573
{
    int data[3];
public:
    Recovered0054B573 *CopyFrom(const Recovered0054B573 &input);
};

__declspec(naked) Recovered0054B573 *Recovered0054B573::CopyFrom(const Recovered0054B573 &)
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

class Recovered0054B74F
{
    int data[3];
public:
    Recovered0054B74F *CopyFrom(const Recovered0054B74F &input);
};

__declspec(naked) Recovered0054B74F *Recovered0054B74F::CopyFrom(const Recovered0054B74F &)
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
