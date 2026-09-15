
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00583510()
{
    __asm pop edx
    __asm pop eax
    __asm pop ecx
    __asm add ecx, dword ptr [esp]
    __asm mov dword ptr [ecx], edx
    __asm sub ecx, dword ptr [esp]
    __asm mov esp, ecx
    __asm pop ecx
    __asm call eax
    __asm ret
}
