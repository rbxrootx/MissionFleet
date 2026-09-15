// Exact recovered framework state helper.
extern "C" __declspec(naked) void Recovered0055C79C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [eax+92], ecx
    __asm cmp dword ptr [ebp+8], 1
    __asm jne second
    __asm mov eax, 1
    __asm jmp done
    __asm second:
    __asm cmp dword ptr [ebp+8], 2
    __asm jne other
    __asm mov eax, 2
    __asm jmp done
    __asm other:
    __asm or eax, 0ffffffffh
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
