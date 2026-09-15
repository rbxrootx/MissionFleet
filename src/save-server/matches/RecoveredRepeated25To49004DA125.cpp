extern "C" void Call004DA150();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004DA125()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm call Call004DA150
    __asm mov dword ptr [ebp - 4], eax
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp - 8], 0
    __asm je loc_004DA14B
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [edx + 4], 0
loc_004DA14B:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
