extern "C" void Call00530FAA();
extern "C" void Call00530FE3();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005311EB()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call00530FAA
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00530FE3
    __asm neg eax
    __asm sbb eax, eax
    __asm inc eax
    __asm pop ebp
    __asm ret 8
}
