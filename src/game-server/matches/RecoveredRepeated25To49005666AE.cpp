extern "C" void Call00566654();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005666AE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_005666C9
    __asm push 1
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00566654
loc_005666C9:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
