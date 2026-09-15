
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0040D340()
{
    __asm push ebp
    __asm mov ebp, esp
loc_0040D343:
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm sub eax, 1
    __asm mov dword ptr [ebp + 0x10], eax
    __asm cmp dword ptr [ebp + 0x10], 0
    __asm jl loc_0040D363
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call dword ptr [ebp + 0x14]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm add ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ebp + 8], ecx
    __asm jmp loc_0040D343
loc_0040D363:
    __asm pop ebp
    __asm ret 0x10
}
