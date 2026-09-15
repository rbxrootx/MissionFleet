// Exact recovered framework state helper.
extern "C" __declspec(naked) void Recovered0044ED6F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+112]
    __asm and ecx, 1000h
    __asm test ecx, ecx
    __asm je no
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+108]
    __asm and eax, 1
    __asm neg eax
    __asm sbb eax, eax
    __asm and al, 0f0h
    __asm add eax, 32
    __asm jmp done
    __asm no:
    __asm xor eax, eax
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
