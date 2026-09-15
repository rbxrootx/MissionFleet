extern "C" void *Data00581DFC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00485ED0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00581DFC
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
