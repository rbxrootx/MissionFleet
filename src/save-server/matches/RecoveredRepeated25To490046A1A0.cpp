
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0046A1A0()
{
    __asm push ebp
    __asm mov ebp, esp
loc_0046A1A3:
    __asm mov eax, dword ptr [ebp + 8]
    __asm cmp eax, dword ptr [ebp + 0xc]
    __asm jae loc_0046A1C3
    __asm mov ecx, dword ptr [ebp + 8]
    __asm cmp dword ptr [ecx], 0
    __asm je loc_0046A1B8
    __asm mov edx, dword ptr [ebp + 8]
    __asm call dword ptr [edx]
loc_0046A1B8:
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 4
    __asm mov dword ptr [ebp + 8], eax
    __asm jmp loc_0046A1A3
loc_0046A1C3:
    __asm pop ebp
    __asm ret
}
