extern "C" __declspec(naked) void Recovered0041E3C1()
{
    __asm
    {
        pop eax
        pop ecx
        xchg eax, dword ptr [esp]
        jmp eax
    }
}

extern "C" __declspec(naked) void Recovered0041E3C8()
{
    __asm
    {
        pop eax
        pop ecx
        xchg eax, dword ptr [esp]
        jmp eax
    }
}
