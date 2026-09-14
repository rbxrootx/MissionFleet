extern "C" void Target00429530();
extern "C" void Target0042C767();
extern "C" void Target0042E02C();

extern "C" __declspec(naked) void Recovered00429520(void *)
{
    __asm mov eax, dword ptr [esp+4]
    __asm push 0
    __asm push eax
    __asm call Target00429530
    __asm ret 4
}

#define DEFINE_ZERO_FORWARDER(address, target) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push 0 \
        __asm push dword ptr [esp+8] \
        __asm call target \
        __asm ret 4 \
    }

DEFINE_ZERO_FORWARDER(0042C759, Target0042C767)
DEFINE_ZERO_FORWARDER(0042E01E, Target0042E02C)
