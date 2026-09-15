extern "C" void *Data00584838;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00544D60()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, offset Data00584838
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
