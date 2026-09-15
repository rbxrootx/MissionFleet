extern "C" void Call00466510();
extern "C" void Call004665D0();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004665A0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp eax, dword ptr [ebp + 8]
    __asm je loc_004665C3
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004665D0
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00466510
loc_004665C3:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
