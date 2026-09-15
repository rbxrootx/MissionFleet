extern "C" void *Data00582B98;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004F3AE8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, offset Data00582B98
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
