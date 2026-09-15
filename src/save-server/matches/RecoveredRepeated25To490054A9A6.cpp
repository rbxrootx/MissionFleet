extern "C" void Call0054BD30();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0054A9A6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp - 8], ecx
    __asm lea ecx, [ebp - 4]
    __asm call Call0054BD30
loc_0054A9BA:
    __asm xor eax, eax
    __asm test eax, eax
    __asm je loc_0054A9C1
    __asm _emit 0cch
loc_0054A9C1:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne loc_0054A9BA
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0xc], eax
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
