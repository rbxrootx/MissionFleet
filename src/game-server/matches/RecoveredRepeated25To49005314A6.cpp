extern "C" void Call00531476();
extern "C" void Call0053148E();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005314A6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push esi
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053148E
    __asm mov esi, eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00531476
    __asm imul eax, eax, 0x18
    __asm sub esi, eax
    __asm mov eax, esi
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
