extern "C" void Call00571095();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00570D51()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0x20]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x1c]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x18]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call00571095
    __asm pop ebp
    __asm ret 0x1c
}
