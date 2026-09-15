// Exact recovered state/data leaf.
extern "C" __declspec(naked) void Recovered0044ED32()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+112]
    __asm and ecx, 1000h
    __asm test ecx, ecx
    __asm je no
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+108]
    __asm and eax, 1
    __asm test eax, eax
    __asm je no
    __asm mov dword ptr [ebp-8], 1
    __asm jmp done
    __asm no:
    __asm mov dword ptr [ebp-8], 0
    __asm done:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
