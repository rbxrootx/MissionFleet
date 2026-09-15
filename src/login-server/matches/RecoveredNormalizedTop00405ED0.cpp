extern "C" void Call00405F00();
extern "C" void Call00405FA0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00405ED0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00405F00
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_00405EF2
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call00405FA0
loc_00405EF2:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
