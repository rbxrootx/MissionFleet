extern "C" void Call004A8A00();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004A89C5()
{
    __asm cmp dword ptr [ebp - 0x1c], 0
    __asm jne loc_004A89E0
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004A8A00
loc_004A89E0:
    __asm ret
}
