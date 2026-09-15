extern "C" void Call00405FA0();
extern "C" void Call0040AD40();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00407BF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0040AD40
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_00407C12
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call00405FA0
loc_00407C12:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
