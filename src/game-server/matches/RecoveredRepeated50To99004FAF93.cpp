extern "C" void Call004FB050();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004FAF93()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [eax + 4], 0
    __asm call Call004FB050
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm mov dword ptr [ecx], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [ecx], edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
