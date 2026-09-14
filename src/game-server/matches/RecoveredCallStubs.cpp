extern "C" void Target004CA0C0();
extern "C" void Target004B1FD0();
extern "C" void Target004B8770();
extern "C" void Target0054806E();
extern "C" void Target004FADB0();

extern "C" __declspec(naked) void Recovered004CA0B0(void *)
{
    __asm mov eax, dword ptr [esp+4]
    __asm push 0
    __asm push eax
    __asm call Target004CA0C0
    __asm ret 4
}

extern "C" __declspec(naked) void Recovered004B20EA()
{
    __asm call Target004B1FD0
    __asm ret
}

extern "C" __declspec(naked) void Recovered004B8760()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 1
    __asm call Target004B8770
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}

#define DEFINE_ALLOC_FORWARDER(address, target) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, dword ptr [ebp+8] \
        __asm push eax \
        __asm call target \
        __asm pop ebp \
        __asm ret 12 \
    }

DEFINE_ALLOC_FORWARDER(00548047, Target0054806E)
DEFINE_ALLOC_FORWARDER(004FAE21, Target004FADB0)
