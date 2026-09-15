
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered0043DE40()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
