extern "C" void Call0042DC19();
extern "C" void *Data00449630;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0040D753()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov dword ptr [ebp - 4], 0
    __asm push offset Data00449630
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call0042DC19
    __asm mov eax, dword ptr [ebp - 4]
    __asm or al, 1
    __asm mov dword ptr [ebp - 4], eax
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
