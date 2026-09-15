extern "C" void Call00525276();
extern "C" void Call0052528E();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005252A6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push esi
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0052528E
    __asm mov esi, eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00525276
    __asm imul eax, eax, 0x18
    __asm sub esi, eax
    __asm mov eax, esi
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
