extern "C" void Call004BCED0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004BCF40()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xe]
    __asm and eax, 0xffff
    __asm and eax, 0x7ff0
    __asm sar eax, 4
    __asm movsx ecx, ax
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm lea eax, [ecx + edx - 0x3fe]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call004BCED0
    __asm add esp, 0xc
    __asm pop ebp
    __asm ret
}
