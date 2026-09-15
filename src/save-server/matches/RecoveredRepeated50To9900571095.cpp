extern "C" void Call005710C7();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00571095()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0x28]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x24]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x20]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x1c]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x18]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call005710C7
    __asm pop ebp
    __asm ret 0x24
}
