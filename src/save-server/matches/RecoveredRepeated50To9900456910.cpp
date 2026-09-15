extern "C" void Call00456800();
extern "C" void Call004569F0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00456910()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm lea eax, [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00456800
    __asm and eax, 0xff
    __asm test eax, eax
    __asm je loc_0045693A
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004569F0
    __asm jmp loc_0045693C
loc_0045693A:
    __asm xor eax, eax
loc_0045693C:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
