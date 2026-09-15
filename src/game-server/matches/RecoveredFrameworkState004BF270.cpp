// Exact recovered framework state helper.
extern "C" __declspec(naked) void Recovered004BF270()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0
    __asm jmp check
    __asm iterate:
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm check:
    __asm cmp dword ptr [ebp-4], 3
    __asm jge yes
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+8]
    __asm cmp dword ptr [edx+ecx*4], 0
    __asm je next_zero
    __asm xor eax, eax
    __asm jmp done
    __asm next_zero:
    __asm jmp iterate
    __asm yes:
    __asm mov eax, 1
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
