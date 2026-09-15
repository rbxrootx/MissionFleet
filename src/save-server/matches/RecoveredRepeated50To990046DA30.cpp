extern "C" void Call0046DA80();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0046DA30()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm cmp dword ptr [ebp + 0x14], 0xa
    __asm jne loc_0046DA51
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm jg loc_0046DA51
    __asm jl loc_0046DA48
    __asm cmp dword ptr [ebp + 8], 0
    __asm jae loc_0046DA51
loc_0046DA48:
    __asm mov dword ptr [ebp - 4], 1
    __asm jmp loc_0046DA58
loc_0046DA51:
    __asm mov dword ptr [ebp - 4], 0
loc_0046DA58:
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call0046DA80
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
