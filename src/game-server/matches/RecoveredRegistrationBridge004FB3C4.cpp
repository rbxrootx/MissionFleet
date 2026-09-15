// Exact recovered class-registration synchronization bridge.
extern "C" void Call004FB550();
extern "C" void Call00545443();
extern "C" void Call00547CDA();
extern "C" void Call00547E0C();
extern "C" __declspec(naked) void Recovered004FB3C4()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm call Call00545443
    __asm mov dword ptr [ebp-4], eax
    __asm push 0
    __asm call Call00547CDA
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 28
    __asm call Call004FB550
    __asm push 0
    __asm call Call00547E0C
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
