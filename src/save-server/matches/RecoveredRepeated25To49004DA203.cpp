extern "C" void Call004DA190();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004DA203()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_004DA221
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call004DA190
    __asm test eax, eax
    __asm je loc_004DA221
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm jmp loc_004DA223
loc_004DA221:
    __asm xor eax, eax
loc_004DA223:
    __asm pop ebp
    __asm ret
}
