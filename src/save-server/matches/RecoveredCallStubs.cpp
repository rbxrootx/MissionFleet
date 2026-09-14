extern "C" void Target00484B00();
extern "C" void Target0046F4D0();
extern "C" void Target004807C0();
extern "C" void Target0054310E();
extern "C" void Target004D9EB0();

extern "C" __declspec(naked) void Recovered00484AF0(void *)
{
    __asm mov eax, dword ptr [esp+4]
    __asm push 0
    __asm push eax
    __asm call Target00484B00
    __asm ret 4
}

extern "C" __declspec(naked) void Recovered0046F5EA()
{
    __asm call Target0046F4D0
    __asm ret
}

extern "C" __declspec(naked) void Recovered004807B0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 1
    __asm call Target004807C0
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

DEFINE_ALLOC_FORWARDER(005430E7, Target0054310E)
DEFINE_ALLOC_FORWARDER(004D9F21, Target004D9EB0)
