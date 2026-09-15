extern "C" void Call0046D800();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0046D7C5()
{
    __asm cmp dword ptr [ebp - 0x1c], 0
    __asm jne loc_0046D7E0
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call0046D800
loc_0046D7E0:
    __asm ret
}
