extern "C" void Call004D42D7();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004CED4D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004D42D7
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
