extern "C" void Call00524DAA();
extern "C" void Call00524DE3();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00525038()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call00524DAA
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00524DE3
    __asm neg eax
    __asm sbb eax, eax
    __asm neg eax
    __asm pop ebp
    __asm ret 8
}
