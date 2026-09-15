extern "C" void Call00503D0A();
extern "C" void *Data005E2140;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered005373E9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call dword ptr [Data005E2140]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00503D0A
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
