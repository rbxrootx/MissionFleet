extern "C" void Call00449DB0();
extern "C" void Call00543135();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00449D80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00449DB0
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_00449DA2
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call00543135
loc_00449DA2:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
