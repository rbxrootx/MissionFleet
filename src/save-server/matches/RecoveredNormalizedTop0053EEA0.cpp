extern "C" void *Data00635A60;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053EEA0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, offset Data00635A60
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
