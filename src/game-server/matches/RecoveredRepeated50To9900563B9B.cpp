extern "C" void Call00564509();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00563B9B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call00564509
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_00563BCC
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_00563BCC
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call dword ptr [eax + 4]
loc_00563BCC:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
