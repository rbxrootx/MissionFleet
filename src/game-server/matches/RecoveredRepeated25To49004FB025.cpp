extern "C" void Call004FB050();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004FB025()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm call Call004FB050
    __asm mov dword ptr [ebp - 4], eax
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp - 8], 0
    __asm je loc_004FB04B
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [edx + 4], 0
loc_004FB04B:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
