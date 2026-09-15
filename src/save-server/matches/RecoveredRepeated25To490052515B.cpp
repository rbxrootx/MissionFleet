extern "C" void Call00524DE3();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0052515B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00524DE3
    __asm xor ecx, ecx
    __asm test eax, eax
    __asm setle cl
    __asm mov al, cl
    __asm pop ebp
    __asm ret 8
}
