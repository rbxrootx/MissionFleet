extern "C" void Call00550F0B();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0055120B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0xbc]
    __asm mov dword ptr [ebp - 8], eax
loc_00551225:
    __asm lea eax, [ebp - 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call Call00550F0B
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_0055124E
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [eax + 0xe4]
    __asm jmp loc_00551225
loc_0055124E:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
